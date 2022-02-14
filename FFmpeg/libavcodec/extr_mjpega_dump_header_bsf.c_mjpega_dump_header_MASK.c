
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int size; int* data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVBSFContext ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;



 int VAR_2 ;

 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int**,int) ;
 int FUNC_9 (int**,int) ;
 int FUNC_10 (int**,char*,int) ;
 int FUNC_11 (int**,int) ;
 int FUNC_12 (int *,TYPE_1__**) ;

__attribute__((used)) static int FUNC_13(AVBSFContext *VAR_3, AVPacket *VAR_4)
{
    AVPacket *VAR_5;
    uint8_t *VAR_6;
    unsigned VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    int VAR_10 = 0, VAR_11;

    VAR_10 = FUNC_12(VAR_3, &VAR_5);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_10 = FUNC_3(VAR_4, VAR_5->size + 44);
    if (VAR_10 < 0)
        goto fail;

    VAR_10 = FUNC_4(VAR_4, VAR_5);
    if (VAR_10 < 0)
        goto fail;

    VAR_6 = VAR_4->data;
    FUNC_11(&VAR_6, 0xff);
    FUNC_11(&VAR_6, VAR_2);
    FUNC_11(&VAR_6, 0xff);
    FUNC_11(&VAR_6, 132);
    FUNC_8(&VAR_6, 42);
    FUNC_9(&VAR_6, 0);
    FUNC_10(&VAR_6, "mjpg", 4);
    FUNC_9(&VAR_6, VAR_5->size + 44);
    FUNC_9(&VAR_6, VAR_5->size + 44);
    FUNC_9(&VAR_6, 0);

    for (VAR_11 = 0; VAR_11 < VAR_5->size - 1; VAR_11++) {
        if (VAR_5->data[VAR_11] == 0xff) {
            switch (VAR_5->data[VAR_11 + 1]) {
            case 130: VAR_7 = VAR_11 + 46; break;
            case 131: VAR_8 = VAR_11 + 46; break;
            case 129: VAR_9 = VAR_11 + 46; break;
            case 128:
                FUNC_9(&VAR_6, VAR_7);
                FUNC_9(&VAR_6, VAR_8);
                FUNC_9(&VAR_6, VAR_9);
                FUNC_9(&VAR_6, VAR_11 + 46);
                FUNC_9(&VAR_6, VAR_11 + 46 + FUNC_0(*(VAR_5->data + VAR_11 + 2)));
                FUNC_10(&VAR_6, VAR_5->data + 2, VAR_5->size - 2);

                VAR_4->size = VAR_6 - VAR_4->data;
                FUNC_5(&VAR_5);
                return 0;
            case 132:
                if (VAR_11 + 8 < VAR_5->size && FUNC_1(VAR_5->data + VAR_11 + 8) == FUNC_1("mjpg")) {
                    FUNC_2(VAR_3, VAR_1, "bitstream already formatted\n");
                    FUNC_7(VAR_4);
                    FUNC_6(VAR_4, VAR_5);
                    FUNC_5(&VAR_5);
                    return 0;
                }
            }
        }
    }
    FUNC_2(VAR_3, VAR_1, "could not find SOS marker in bitstream\n");
fail:
    FUNC_7(VAR_4);
    FUNC_5(&VAR_5);
    return VAR_0;
}
