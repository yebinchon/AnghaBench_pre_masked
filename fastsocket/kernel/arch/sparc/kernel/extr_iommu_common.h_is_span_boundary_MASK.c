
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; scalar_t__ dma_length; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (unsigned long,int,unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long,scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_3(unsigned long VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3,
       struct scatterlist *VAR_4,
       struct scatterlist *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = FUNC_2(VAR_6, VAR_4->dma_length + VAR_5->length,
     VAR_0);

 return FUNC_1(VAR_1, VAR_7, VAR_2, VAR_3);
}
