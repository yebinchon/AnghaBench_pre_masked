
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int header_parsed; } ;
struct TYPE_7__ {int chunk_seq; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSHContext ;
typedef TYPE_2__ MMSContext ;
typedef int ChunkType ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(MMSHContext *VAR_3)
{
    MMSContext *VAR_4 = &VAR_3->mms;
    int VAR_5, VAR_6 = 0;
    ChunkType VAR_7;
    VAR_7 = FUNC_2(VAR_3, &VAR_6);

    switch (VAR_7) {
    case 129:
        VAR_3->chunk_seq = 0;
        FUNC_1(((void*)0), VAR_1, "Stream ended!\n");
        return FUNC_0(VAR_2);
    case 128:
        VAR_4->header_parsed = 0;
        if ((VAR_5 = FUNC_3(VAR_3))) {
            FUNC_1(((void*)0), VAR_1,"Stream changed! Failed to get new header!\n");
            return VAR_5;
        }
        break;
    case 130:
        return FUNC_4(VAR_3, VAR_6);
    default:
        FUNC_1(((void*)0), VAR_1, "Recv other type packet %d\n", VAR_7);
        return VAR_0;
    }
    return 0;
}
