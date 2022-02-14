
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channels; TYPE_1__* d; } ;
struct TYPE_4__ {int* channel_map; } ;
typedef TYPE_2__ FFEBUR128State ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(FFEBUR128State * VAR_7)
{
    size_t VAR_8;
    VAR_7->d->channel_map =
        (int *) FUNC_1(VAR_7->channels, sizeof(int));
    if (!VAR_7->d->channel_map)
        return FUNC_0(VAR_0);
    if (VAR_7->channels == 4) {
        VAR_7->d->channel_map[0] = VAR_2;
        VAR_7->d->channel_map[1] = VAR_4;
        VAR_7->d->channel_map[2] = VAR_3;
        VAR_7->d->channel_map[3] = VAR_5;
    } else if (VAR_7->channels == 5) {
        VAR_7->d->channel_map[0] = VAR_2;
        VAR_7->d->channel_map[1] = VAR_4;
        VAR_7->d->channel_map[2] = VAR_1;
        VAR_7->d->channel_map[3] = VAR_3;
        VAR_7->d->channel_map[4] = VAR_5;
    } else {
        for (VAR_8 = 0; VAR_8 < VAR_7->channels; ++VAR_8) {
            switch (VAR_8) {
            case 0:
                VAR_7->d->channel_map[VAR_8] = VAR_2;
                break;
            case 1:
                VAR_7->d->channel_map[VAR_8] = VAR_4;
                break;
            case 2:
                VAR_7->d->channel_map[VAR_8] = VAR_1;
                break;
            case 3:
                VAR_7->d->channel_map[VAR_8] = VAR_6;
                break;
            case 4:
                VAR_7->d->channel_map[VAR_8] = VAR_3;
                break;
            case 5:
                VAR_7->d->channel_map[VAR_8] = VAR_5;
                break;
            default:
                VAR_7->d->channel_map[VAR_8] = VAR_6;
                break;
            }
        }
    }
    return 0;
}
