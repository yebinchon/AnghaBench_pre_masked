
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {scalar_t__ type; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mem_chunk* FUNC_0 () ;
 int FUNC_1 (struct mem_chunk*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct mem_chunk *VAR_3, *VAR_4;
 int VAR_5, VAR_6 = 0;

 VAR_3 = FUNC_0();
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = &VAR_3[VAR_5];
  if (VAR_3[VAR_5].type != VAR_1 &&
      VAR_3[VAR_5].type != VAR_0)
   continue;
  if (VAR_4->size == 0)
   continue;
  VAR_6++;
 }
 FUNC_1(VAR_3);
 return VAR_6;
}
