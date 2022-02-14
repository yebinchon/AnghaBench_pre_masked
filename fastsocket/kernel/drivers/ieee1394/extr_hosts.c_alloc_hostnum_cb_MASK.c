
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int id; } ;



__attribute__((used)) static int FUNC_0(struct hpsb_host *VAR_0, void *VAR_1)
{
 int *VAR_2 = VAR_1;

 if (VAR_0->id == *VAR_2)
  return 1;

 return 0;
}
