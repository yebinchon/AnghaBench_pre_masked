
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct qdio_buffer_element {int eflags; int length; void* addr; int sflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_1(struct qdio_buffer_element *VAR_2,
         struct scatterlist *VAR_3,
         struct scatterlist *VAR_4)
{
 VAR_2[0].sflags |= VAR_1;
 VAR_2[2].addr = FUNC_0(VAR_3);
 VAR_2[2].length = VAR_3->length;
 VAR_2[3].addr = FUNC_0(VAR_4);
 VAR_2[3].length = VAR_4->length;
 VAR_2[3].eflags |= VAR_0;
}
