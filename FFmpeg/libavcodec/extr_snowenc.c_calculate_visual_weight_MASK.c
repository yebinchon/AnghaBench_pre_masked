
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int width; int height; TYPE_1__** band; } ;
struct TYPE_7__ {int spatial_decomposition_count; int* spatial_idwt_buffer; int spatial_decomposition_type; int temp_idwt_buffer; } ;
struct TYPE_6__ {int* ibuf; int width; int height; int stride; int qlog; } ;
typedef TYPE_1__ SubBand ;
typedef TYPE_2__ SnowContext ;
typedef TYPE_3__ Plane ;
typedef int IDWTELEM ;


 double VAR_0 ;
 int FUNC_0 (int*,int ,int,int,int,int ,int) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int*,int ,int) ;
 double FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(SnowContext *VAR_1, Plane *VAR_2){
    int VAR_3 = VAR_2->width;
    int VAR_4= VAR_2->height;
    int VAR_5, VAR_6, VAR_7, VAR_8;

    for(VAR_5=0; VAR_5<VAR_1->spatial_decomposition_count; VAR_5++){
        for(VAR_6=VAR_5 ? 1 : 0; VAR_6<4; VAR_6++){
            SubBand *VAR_9= &VAR_2->band[VAR_5][VAR_6];
            IDWTELEM *VAR_10= VAR_9->ibuf;
            int64_t VAR_11=0;

            FUNC_2(VAR_1->spatial_idwt_buffer, 0, sizeof(*VAR_1->spatial_idwt_buffer)*VAR_3*VAR_4);
            VAR_10[VAR_9->width/2 + VAR_9->height/2*VAR_9->stride]= 256*16;
            FUNC_0(VAR_1->spatial_idwt_buffer, VAR_1->temp_idwt_buffer, VAR_3, VAR_4, VAR_3, VAR_1->spatial_decomposition_type, VAR_1->spatial_decomposition_count);
            for(VAR_8=0; VAR_8<VAR_4; VAR_8++){
                for(VAR_7=0; VAR_7<VAR_3; VAR_7++){
                    int64_t VAR_12= VAR_1->spatial_idwt_buffer[VAR_7 + VAR_8*VAR_3]*16;
                    VAR_11 += VAR_12*VAR_12;
                }
            }

            VAR_9->qlog= (int)(VAR_0 * FUNC_1(352256.0/FUNC_3(VAR_11)) + 0.5);
        }
    }
}
