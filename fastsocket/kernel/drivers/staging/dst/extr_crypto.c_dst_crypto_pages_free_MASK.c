
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_crypto_engine {unsigned int page_num; int * pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dst_crypto_engine *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1=0; VAR_1<VAR_0->page_num; ++VAR_1)
  FUNC_0(VAR_0->pages[VAR_1]);
 FUNC_1(VAR_0->pages);
}
