
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int offset; int length; } ;
struct mmc_data {unsigned int blksz; unsigned int blocks; unsigned int sg_len; struct scatterlist* sg; } ;
struct at91mci_host {unsigned int* buffer; int total_length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned int* FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int*,int ) ;
 int FUNC_6 (unsigned int*,unsigned int*,int) ;
 int FUNC_7 (unsigned int*,int ,int) ;
 int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static inline void FUNC_11(struct at91mci_host *VAR_1, struct mmc_data *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 unsigned *VAR_6 = VAR_1->buffer;

 VAR_5 = VAR_2->blksz * VAR_2->blocks;
 VAR_3 = VAR_2->sg_len;


 if (FUNC_2() || FUNC_3())
  if (VAR_1->total_length == 12)
   FUNC_7(VAR_6, 0, 12);






 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct scatterlist *VAR_7;
  int VAR_8;
  unsigned int *VAR_9;

  VAR_7 = &VAR_2->sg[VAR_4];

  VAR_9 = FUNC_4(FUNC_9(VAR_7), VAR_0) + VAR_7->offset;
  VAR_8 = FUNC_8(VAR_5, VAR_7->length);
  VAR_5 -= VAR_8;

  if (FUNC_1()) {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < (VAR_8 / 4); VAR_10++)
    *VAR_6++ = FUNC_10(VAR_9[VAR_10]);
  } else {
   FUNC_6(VAR_6, VAR_9, VAR_8);
   VAR_6 += VAR_8;
  }

  FUNC_5(VAR_9, VAR_0);

  if (VAR_5 == 0)
   break;
 }





 FUNC_0(VAR_5 != 0);
}
