
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps65010 {int nmask2; int regstatus; int nmask1; int chgstatus; int chgconf; unsigned int charging; scalar_t__ model; int work; int flags; int por; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(struct tps65010 *VAR_10)
{
 u8 VAR_11 = 0, VAR_12, VAR_13;




 VAR_13 = 0;


 if (VAR_10->nmask2) {
  VAR_11 = FUNC_1(VAR_10->client, VAR_8);
  VAR_12 = VAR_11 ^ VAR_10->regstatus;
  VAR_10->regstatus = VAR_11;
  VAR_12 &= VAR_10->nmask2;
 } else
  VAR_12 = 0;
 if (VAR_12) {
  VAR_10->regstatus = VAR_11;



  if (VAR_11 & VAR_9) {
   FUNC_2("%s: power off button\n", VAR_0);
   VAR_13 = 1;
  }
 }


 if (VAR_10->nmask1) {
  VAR_11 = FUNC_1(VAR_10->client, VAR_5);
  VAR_12 = VAR_11 ^ VAR_10->chgstatus;
  VAR_10->chgstatus = VAR_11;
  VAR_12 &= VAR_10->nmask1;
 } else
  VAR_12 = 0;
 if (VAR_12) {
  unsigned VAR_14 = 0;

  FUNC_6("chg/irq", VAR_11);
  if (VAR_11 & (VAR_7|VAR_6))
   FUNC_5(VAR_10->por, "conf", VAR_10->chgconf);





  if (!(VAR_10->chgstatus & ~(VAR_7|VAR_6))
    && (VAR_10->chgstatus & (VAR_7|VAR_6))
    && (VAR_10->chgconf & VAR_4)
    ) {
   if (VAR_10->chgstatus & VAR_7) {

    if (VAR_12 & VAR_7)
     FUNC_4(VAR_1, &VAR_10->flags);
    VAR_14 = 1;
   } else if (VAR_10->chgstatus & VAR_6)
    VAR_14 = 1;
  }
  if (VAR_14 != VAR_10->charging) {
   VAR_10->charging = VAR_14;
   FUNC_2("%s: battery %scharging\n",
    VAR_0, VAR_14 ? "" :
    ((VAR_10->chgstatus & (VAR_7|VAR_6))
     ? "NOT " : "dis"));
  }
 }




 if ((VAR_10->model != VAR_3 || !VAR_10->charging)
   && (VAR_10->chgstatus & (VAR_7|VAR_6)))
  VAR_13 = 1;
 if (VAR_13)
  (void) FUNC_3(&VAR_10->work, VAR_2);


}
