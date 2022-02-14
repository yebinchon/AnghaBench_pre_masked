
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Visual ;
typedef int Display ;


 int * FUNC_0 (int *,int *,int,int ,int ,void*,int,int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(Display *VAR_6, Visual *VAR_7)
{
 void *VAR_8;

 FUNC_2(VAR_5);

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 VAR_4 = ((void*)0);

 VAR_8 = FUNC_4(VAR_2 * VAR_1, 4);
 if (VAR_8 != ((void*)0))
  VAR_4 = FUNC_0(VAR_6, VAR_7, 24, VAR_0, 0,
    VAR_8, VAR_2, VAR_1, 32, 0);
 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_3, "failed to alloc ximage\n");

 FUNC_3(VAR_5);
}
