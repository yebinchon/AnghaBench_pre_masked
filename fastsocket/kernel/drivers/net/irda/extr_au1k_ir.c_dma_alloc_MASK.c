
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void *FUNC_5(size_t VAR_2, dma_addr_t * VAR_3)
{
 void *VAR_4;
 int VAR_5 = VAR_0 | VAR_1;

 VAR_4 = (void *) FUNC_1(VAR_5, FUNC_2(VAR_2));

 if (VAR_4 != ((void*)0)) {
  FUNC_3(VAR_4, 0, VAR_2);
  *VAR_3 = FUNC_4(VAR_4);
  VAR_4 = (void *)FUNC_0(VAR_4);
 }
 return VAR_4;
}
