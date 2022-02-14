
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int response_code; } ;
struct init_sccb {TYPE_1__ header; } ;
struct TYPE_4__ {scalar_t__ status; int command; scalar_t__ sccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int FUNC_5 (int,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,struct init_sccb*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int,int ,int *) ;

__attribute__((used)) static int
FUNC_11(void)
{
 struct init_sccb *VAR_15;
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_8(&VAR_11, VAR_16);

 VAR_18 = FUNC_5(0x2401, VAR_8,
            &VAR_7);
 if (VAR_18) {
  FUNC_9(&VAR_11, VAR_16);
  return VAR_18;
 }
 for (VAR_17 = 0; VAR_17 <= VAR_3; VAR_17++) {
  FUNC_0(0, 0);
  VAR_15 = (struct init_sccb *) VAR_10.sccb;
  VAR_18 = FUNC_6(VAR_10.command, VAR_15);
  if (VAR_18 == -VAR_1)
   break;
  VAR_10.status = VAR_5;
  VAR_13 = VAR_14;
  FUNC_1(VAR_6 * VAR_2,
      VAR_9, 0);
  FUNC_9(&VAR_11, VAR_16);


  FUNC_3(0, 9);

  FUNC_7();


  FUNC_2(0,9);
  FUNC_8(&VAR_11, VAR_16);
  FUNC_4(&VAR_12);
  if (VAR_10.status == VAR_4 &&
      VAR_15->header.response_code == 0x20) {
   VAR_18 = 0;
   break;
  } else
   VAR_18 = -VAR_0;
 }
 FUNC_10(0x2401, VAR_8,
         &VAR_7);
 FUNC_9(&VAR_11, VAR_16);
 return VAR_18;
}
