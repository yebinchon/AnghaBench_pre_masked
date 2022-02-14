
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_id {int id; scalar_t__ major; } ;
typedef enum fwtype { ____Placeholder_fwtype } fwtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline enum fwtype FUNC_0(struct comp_id *VAR_3)
{
 if (VAR_3->id < 0x8000)
  return VAR_0;
 else if (VAR_3->id == 0x8000 && VAR_3->major == 0)
  return VAR_2;
 else
  return VAR_1;
}
