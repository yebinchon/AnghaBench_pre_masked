
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*,int ) ;
 int FUNC_7 (struct ql_adapter*) ;
 int FUNC_8 (struct ql_adapter*,int ,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ql_adapter *VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;


 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_9, VAR_7, VAR_9->ndev, "Failed to clear routing bits.\n");
  return VAR_11;
 }

 VAR_12 = VAR_8 +
  FUNC_2((unsigned long)1, FUNC_11(30));




 if (!FUNC_9(VAR_3, &VAR_9->flags)) {

  FUNC_5(VAR_9, VAR_2);


  FUNC_7(VAR_9);
 } else
  FUNC_0(VAR_3, &VAR_9->flags);

 FUNC_8(VAR_9, VAR_4, (VAR_5 << 16) | VAR_5);

 do {
  VAR_10 = FUNC_6(VAR_9, VAR_4);
  if ((VAR_10 & VAR_5) == 0)
   break;
  FUNC_1();
 } while (FUNC_10(VAR_8, VAR_12));

 if (VAR_10 & VAR_5) {
  FUNC_3(VAR_9, VAR_6, VAR_9->ndev,
     "ETIMEDOUT!!! errored out of resetting the chip!\n");
  VAR_11 = -VAR_0;
 }


 FUNC_5(VAR_9, VAR_1);
 return VAR_11;
}
