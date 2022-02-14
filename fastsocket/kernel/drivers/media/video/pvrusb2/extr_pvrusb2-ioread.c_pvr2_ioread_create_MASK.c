
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_ioread*) ;
 struct pvr2_ioread* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct pvr2_ioread*) ;
 int FUNC_3 (int ,char*,struct pvr2_ioread*) ;

struct pvr2_ioread *FUNC_4(void)
{
 struct pvr2_ioread *VAR_2;
 VAR_2 = FUNC_1(sizeof(*VAR_2),VAR_0);
 if (!VAR_2) return ((void*)0);
 FUNC_3(VAR_1,"pvr2_ioread_create id=%p",VAR_2);
 if (FUNC_2(VAR_2) < 0) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
