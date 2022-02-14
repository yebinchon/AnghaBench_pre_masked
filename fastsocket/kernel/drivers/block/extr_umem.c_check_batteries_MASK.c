
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardinfo {TYPE_1__* dev; scalar_t__ csr_remap; } ;
struct TYPE_2__ {int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cardinfo*,int,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,char*,char*,char*) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cardinfo*) ;

__attribute__((used)) static void FUNC_4(struct cardinfo *VAR_6)
{




 unsigned char VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_6->csr_remap + VAR_4);
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_3, &VAR_6->dev->dev,
   "checking battery status, 1 = %s, 2 = %s\n",
         (VAR_7 & VAR_0) ? "FAILURE" : "OK",
         (VAR_7 & VAR_1) ? "FAILURE" : "OK");

 VAR_8 = FUNC_0(VAR_6, 0, !(VAR_7 & VAR_0));
 VAR_9 = FUNC_0(VAR_6, 1, !(VAR_7 & VAR_1));

 if (VAR_8 || VAR_9)
  FUNC_3(VAR_6);
}
