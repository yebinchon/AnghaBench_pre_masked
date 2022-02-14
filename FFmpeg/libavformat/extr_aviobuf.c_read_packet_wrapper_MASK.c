
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int (* read_packet ) (int ,int *,int) ;scalar_t__ max_packet_size; int opaque; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_3, uint8_t *VAR_4, int VAR_5)
{
    int VAR_6;

    if (!VAR_3->read_packet)
        return FUNC_0(VAR_2);
    VAR_6 = VAR_3->read_packet(VAR_3->opaque, VAR_4, VAR_5);






    FUNC_1(VAR_6 || VAR_3->max_packet_size);

    return VAR_6;
}
