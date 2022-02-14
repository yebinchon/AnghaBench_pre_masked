
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_cmd {int cmdend; int cmdptr; int error; } ;



__attribute__((used)) static const void* FUNC_0(struct pmf_cmd *VAR_0, int VAR_1)
{
 const void *VAR_2;
 if ((VAR_0->cmdend - VAR_0->cmdptr) < VAR_1) {
  VAR_0->error = 1;
  return ((void*)0);
 }
 VAR_2 = VAR_0->cmdptr;
 VAR_0->cmdptr += VAR_1;
 return VAR_2;
}
