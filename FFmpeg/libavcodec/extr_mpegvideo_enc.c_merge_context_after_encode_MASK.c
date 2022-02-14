
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * encoding_error; } ;
struct TYPE_11__ {int error_count; } ;
struct TYPE_10__ {int buf; } ;
struct TYPE_9__ {TYPE_2__ pb; scalar_t__ noise_reduction; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int * VAR_2 ;
 int ** VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_5(MpegEncContext *VAR_13, MpegEncContext *VAR_14){
    int VAR_15;

    FUNC_0(VAR_2[0]);
    FUNC_0(VAR_2[1]);
    FUNC_0(VAR_9);
    FUNC_0(VAR_7);
    FUNC_0(VAR_10);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
    FUNC_0(VAR_0);
    FUNC_0(VAR_12);
    FUNC_0(VAR_8);
    FUNC_0(VAR_4.error_count);
    FUNC_0(VAR_11);
    FUNC_0(VAR_1.encoding_error[0]);
    FUNC_0(VAR_1.encoding_error[1]);
    FUNC_0(VAR_1.encoding_error[2]);

    if (VAR_13->noise_reduction){
        for(VAR_15=0; VAR_15<64; VAR_15++){
            FUNC_0(VAR_3[0][VAR_15]);
            FUNC_0(VAR_3[1][VAR_15]);
        }
    }

    FUNC_1(FUNC_4(&VAR_14->pb) % 8 ==0);
    FUNC_1(FUNC_4(&VAR_13->pb) % 8 ==0);
    FUNC_2(&VAR_13->pb, VAR_14->pb.buf, FUNC_4(&VAR_14->pb));
    FUNC_3(&VAR_13->pb);
}
