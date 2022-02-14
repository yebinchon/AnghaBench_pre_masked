
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int length; } ;
struct mmc_data {struct scatterlist* sg; } ;
struct TYPE_4__ {size_t index; int offset; int len; } ;
struct au1xmmc_host {int flags; int data_task; TYPE_2__ pio; TYPE_1__* mrq; } ;
struct TYPE_3__ {struct mmc_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct au1xmmc_host*) ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int FUNC_2 (struct au1xmmc_host*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct au1xmmc_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long,int ) ;
 unsigned char* FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct au1xmmc_host *VAR_5)
{
 struct mmc_data *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 unsigned char *VAR_10, VAR_11;
 u32 VAR_12;
 struct scatterlist *VAR_13;

 VAR_6 = VAR_5->mrq->data;

 if (!(VAR_5->flags & VAR_2))
  return;


 VAR_13 = &VAR_6->sg[VAR_5->pio.index];
 VAR_10 = FUNC_7(VAR_13) + VAR_5->pio.offset;


 VAR_7 = VAR_6->sg[VAR_5->pio.index].length - VAR_5->pio.offset;


 VAR_8 = (VAR_7 > VAR_5->pio.len) ? VAR_5->pio.len : VAR_7;
 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_12 = FUNC_4(FUNC_0(VAR_5));

  if (!(VAR_12 & VAR_4))
   break;

  VAR_11 = *VAR_10++;

  FUNC_6((unsigned long)VAR_11, FUNC_1(VAR_5));
  FUNC_5();
 }

 VAR_5->pio.len -= VAR_9;
 VAR_5->pio.offset += VAR_9;

 if (VAR_9 == VAR_7) {
  VAR_5->pio.index++;
  VAR_5->pio.offset = 0;
 }

 if (VAR_5->pio.len == 0) {
  FUNC_2(VAR_5, VAR_3);

  if (VAR_5->flags & VAR_1)
   FUNC_3(VAR_5);

  FUNC_8(&VAR_5->data_task);
 }
}
