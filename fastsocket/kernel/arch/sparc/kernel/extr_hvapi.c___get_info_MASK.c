
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct api_info {unsigned long group; } ;


 int FUNC_0 (struct api_info*) ;
 struct api_info* VAR_0 ;

__attribute__((used)) static struct api_info *FUNC_1(unsigned long VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].group == VAR_1)
   return &VAR_0[VAR_2];
 }
 return ((void*)0);
}
