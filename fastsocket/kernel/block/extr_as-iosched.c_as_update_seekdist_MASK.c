
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct as_io_context {int seek_samples; int seek_mean; int seek_total; } ;
struct as_data {int new_seek_total; int new_seek_mean; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct as_data *VAR_0, struct as_io_context *VAR_1,
    sector_t VAR_2)
{
 u64 VAR_3;

 if (VAR_1->seek_samples == 0) {
  VAR_0->new_seek_total = (7*VAR_0->new_seek_total + 256*(u64)VAR_2)/8;
  VAR_0->new_seek_mean = VAR_0->new_seek_total / 256;
 }





 if (VAR_1->seek_samples <= 60)
  VAR_2 = FUNC_1(VAR_2, (VAR_1->seek_mean * 4) + 2*1024*1024);
 else
  VAR_2 = FUNC_1(VAR_2, (VAR_1->seek_mean * 4) + 2*1024*64);

 VAR_1->seek_samples = (7*VAR_1->seek_samples + 256) / 8;
 VAR_1->seek_total = (7*VAR_1->seek_total + (u64)256*VAR_2) / 8;
 VAR_3 = VAR_1->seek_total + (VAR_1->seek_samples/2);
 FUNC_0(VAR_3, VAR_1->seek_samples);
 VAR_1->seek_mean = (sector_t)VAR_3;
}
