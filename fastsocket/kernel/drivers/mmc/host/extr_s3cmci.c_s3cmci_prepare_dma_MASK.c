
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {int dmatogo; int dma; scalar_t__ dma_complete; int mmc; } ;
struct mmc_data {int flags; int * sg; int sg_len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct s3cmci_host*,int ,char*,int,int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct s3cmci_host*,int ,int ) ;
 int FUNC_6 (struct s3cmci_host*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct s3cmci_host *VAR_11, struct mmc_data *VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15 = VAR_12->flags & VAR_5;

 FUNC_0((VAR_12->flags & VAR_0) == VAR_0);

 FUNC_6(VAR_11, VAR_15 ? VAR_9 : VAR_8);
 FUNC_4(VAR_11->dma, VAR_6);

 VAR_13 = FUNC_2(FUNC_3(VAR_11->mmc), VAR_12->sg, VAR_12->sg_len,
        VAR_15 ? VAR_2 : VAR_1);

 if (VAR_13 == 0)
  return -VAR_4;

 VAR_11->dma_complete = 0;
 VAR_11->dmatogo = VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  int VAR_16;

  FUNC_1(VAR_11, VAR_10, "enqueue %i: %08x@%u\n", VAR_14,
      FUNC_7(&VAR_12->sg[VAR_14]),
      FUNC_8(&VAR_12->sg[VAR_14]));

  VAR_16 = FUNC_5(VAR_11->dma, VAR_11,
       FUNC_7(&VAR_12->sg[VAR_14]),
       FUNC_8(&VAR_12->sg[VAR_14]));

  if (VAR_16) {
   FUNC_4(VAR_11->dma, VAR_6);
   return -VAR_3;
  }
 }

 FUNC_4(VAR_11->dma, VAR_7);

 return 0;
}
