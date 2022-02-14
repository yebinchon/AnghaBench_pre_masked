
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispmanx_surface {int bmp_rect; int pitch; int pixformat; struct dispmanx_page* pages; } ;
struct dispmanx_page {int resource; } ;


 int FUNC_0 (int ,int ,int ,void*,int *) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, struct dispmanx_surface *VAR_1)
{
   struct dispmanx_page *VAR_2 = ((void*)0);


   VAR_2 = &(VAR_1->pages[0]);


   FUNC_0(VAR_2->resource, VAR_1->pixformat,
         VAR_1->pitch, (void*)VAR_0, &(VAR_1->bmp_rect));
}
