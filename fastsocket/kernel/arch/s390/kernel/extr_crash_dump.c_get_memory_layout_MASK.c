
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mem_chunk*,int ,int ,int ) ;
 int FUNC_1 (struct mem_chunk*) ;
 struct mem_chunk* FUNC_2 (int) ;

__attribute__((used)) static struct mem_chunk *FUNC_3(void)
{
 struct mem_chunk *VAR_4;

 VAR_4 = FUNC_2(VAR_1 * sizeof(struct mem_chunk));
 FUNC_1(VAR_4);
 FUNC_0(VAR_4, VAR_2, VAR_3, VAR_0);
 return VAR_4;
}
