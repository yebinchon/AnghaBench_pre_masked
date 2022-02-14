
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ total_out; scalar_t__ avail_out; int * next_out; scalar_t__ total_in; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_4__ {TYPE_2__ inflater; } ;
typedef TYPE_1__ zlib_codec_data ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int chd_error ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

chd_error FUNC_2(void *VAR_4, const uint8_t *VAR_5, uint32_t VAR_6, uint8_t *VAR_7, uint32_t VAR_8)
{
 zlib_codec_data *VAR_9 = (zlib_codec_data *)VAR_4;
 int VAR_10;


 VAR_9->inflater.next_in = (Bytef *)VAR_5;
 VAR_9->inflater.avail_in = VAR_6;
 VAR_9->inflater.total_in = 0;
 VAR_9->inflater.next_out = (Bytef *)VAR_7;
 VAR_9->inflater.avail_out = VAR_8;
 VAR_9->inflater.total_out = 0;
 VAR_10 = FUNC_1(&VAR_9->inflater);
 if (VAR_10 != VAR_3)
  return VAR_0;


 VAR_10 = FUNC_0(&VAR_9->inflater, VAR_2);
    (void)VAR_10;
 if (VAR_9->inflater.total_out != VAR_8)
  return VAR_0;

 return VAR_1;
}
