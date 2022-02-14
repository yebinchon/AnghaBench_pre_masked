
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int dummy; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 struct hstate* FUNC_0 (struct file*) ;
 int FUNC_1 (struct hstate*) ;
 int * VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long,int,int,int ) ;

unsigned long FUNC_4(struct file *VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6)
{
 struct hstate *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = FUNC_2(FUNC_1(VAR_7));

 if (!VAR_1[VAR_8])
  return -VAR_0;
 return FUNC_3(VAR_3, VAR_4, VAR_6, VAR_8, 1, 0);
}
