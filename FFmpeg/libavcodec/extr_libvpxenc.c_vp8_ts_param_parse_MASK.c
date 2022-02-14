
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpx_codec_enc_cfg {int ts_layer_id; void* ts_periodicity; int ts_rate_decimator; int ts_target_bitrate; void* ts_number_layers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;
 void* FUNC_2 (char*,char**,int) ;
 int FUNC_3 (int ,char*,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct vpx_codec_enc_cfg *VAR_2, char *VAR_3, char *VAR_4)
{
    size_t VAR_5 = FUNC_1(VAR_4);

    if (!VAR_5)
        return -1;

    if (!FUNC_0(VAR_3, "ts_number_layers"))
        VAR_2->ts_number_layers = FUNC_2(VAR_4, &VAR_4, 10);
    else if (!FUNC_0(VAR_3, "ts_target_bitrate"))
        FUNC_3(VAR_2->ts_target_bitrate, VAR_4, VAR_5, VAR_0);
    else if (!FUNC_0(VAR_3, "ts_rate_decimator"))
      FUNC_3(VAR_2->ts_rate_decimator, VAR_4, VAR_5, VAR_0);
    else if (!FUNC_0(VAR_3, "ts_periodicity"))
        VAR_2->ts_periodicity = FUNC_2(VAR_4, &VAR_4, 10);
    else if (!FUNC_0(VAR_3, "ts_layer_id"))
        FUNC_3(VAR_2->ts_layer_id, VAR_4, VAR_5, VAR_1);

    return 0;
}
