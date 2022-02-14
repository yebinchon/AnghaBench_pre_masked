
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int length; } ;
struct s3cmci_host {scalar_t__ pio_active; size_t pio_sgptr; TYPE_2__* mrq; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {size_t sg_len; struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct s3cmci_host*,int ,char*,size_t,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static inline int FUNC_2(struct s3cmci_host *VAR_5,
      u32 *VAR_6, u32 **VAR_7)
{
 struct scatterlist *VAR_8;

 if (VAR_5->pio_active == VAR_2)
  return -VAR_1;

 if ((!VAR_5->mrq) || (!VAR_5->mrq->data))
  return -VAR_1;

 if (VAR_5->pio_sgptr >= VAR_5->mrq->data->sg_len) {
  FUNC_0(VAR_5, VAR_3, "no more buffers (%i/%i)\n",
        VAR_5->pio_sgptr, VAR_5->mrq->data->sg_len);
  return -VAR_0;
 }
 VAR_8 = &VAR_5->mrq->data->sg[VAR_5->pio_sgptr];

 *VAR_6 = VAR_8->length;
 *VAR_7 = FUNC_1(VAR_8);

 VAR_5->pio_sgptr++;

 FUNC_0(VAR_5, VAR_4, "new buffer (%i/%i)\n",
     VAR_5->pio_sgptr, VAR_5->mrq->data->sg_len);

 return 0;
}
