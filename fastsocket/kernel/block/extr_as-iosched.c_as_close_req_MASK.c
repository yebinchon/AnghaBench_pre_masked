
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct as_io_context {scalar_t__ seek_samples; int seek_mean; } ;
struct as_data {int* last_sector; size_t batch_data_dir; scalar_t__ antic_status; unsigned long antic_start; unsigned long antic_expire; int new_seek_mean; int ioc_finished; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*) ;
 unsigned long VAR_2 ;

__attribute__((used)) static int FUNC_1(struct as_data *VAR_3, struct as_io_context *VAR_4,
   struct request *VAR_5)
{
 unsigned long VAR_6;
 sector_t VAR_7 = VAR_3->last_sector[VAR_3->batch_data_dir];
 sector_t VAR_8 = FUNC_0(VAR_5);
 sector_t VAR_9;
 sector_t VAR_10;

 if (VAR_3->antic_status == VAR_0 || !VAR_3->ioc_finished)
  VAR_6 = 0;
 else
  VAR_6 = VAR_2 - VAR_3->antic_start;

 if (VAR_6 == 0)
  VAR_9 = 8192;
 else if (VAR_6 <= (20 * VAR_1 / 1000) && VAR_6 <= VAR_3->antic_expire)
  VAR_9 = 8192 << VAR_6;
 else
  return 1;

 if ((VAR_7 <= VAR_8 + (VAR_9>>1)) && (VAR_8 <= VAR_7 + VAR_9))
  return 1;

 if (VAR_7 < VAR_8)
  VAR_10 = VAR_8 - VAR_7;
 else
  VAR_10 = VAR_7 - VAR_8;

 if (VAR_4->seek_samples == 0) {




  if (VAR_3->new_seek_mean > VAR_10) {

   return 1;
  }

 } else {
  if (VAR_4->seek_mean > VAR_10) {

   return 1;
  }
 }

 return 0;
}
