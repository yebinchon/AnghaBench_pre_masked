
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ esp_err_t ;
typedef int buf_desc_t ;
struct TYPE_3__ {int send_queue_size; } ;
struct TYPE_4__ {int sendbuf; TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int **,int **,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_5(void)
{
    esp_err_t VAR_6 = FUNC_1(&VAR_3.sendbuf, sizeof(buf_desc_t), VAR_3.config.send_queue_size);
    if (VAR_6 != VAR_0) return VAR_6;

    esp_err_t VAR_7;
    buf_desc_t *VAR_8=((void*)0), *VAR_9=((void*)0);


    VAR_6 = FUNC_4(&VAR_3.sendbuf, ((void*)0), ((void*)0), VAR_5);
    if (VAR_6 != VAR_0) return VAR_6;


    for (int VAR_10 = 0; VAR_10 < VAR_3.config.send_queue_size+1; VAR_10++) {
        VAR_7 = FUNC_2(&VAR_3.sendbuf, (uint8_t**)&VAR_9, ((void*)0), VAR_2, 0);
        FUNC_0 (VAR_7 == VAR_0);
        VAR_6 = FUNC_4(&VAR_3.sendbuf, VAR_4, VAR_9, VAR_5);
        if (VAR_6 != VAR_0) return VAR_6;
        FUNC_3(&VAR_3.sendbuf, (uint8_t*)VAR_9);
    }
    VAR_8 = ((void*)0);
    VAR_9 = ((void*)0);

    VAR_7 = FUNC_2(&VAR_3.sendbuf, (uint8_t**)&VAR_8, (uint8_t**)&VAR_9, VAR_1, 0);
    FUNC_0 (VAR_7 == VAR_0);
    FUNC_0(VAR_8 == VAR_9);
    FUNC_3(&VAR_3.sendbuf, (uint8_t*)VAR_8);
    return VAR_0;
}
