
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int payload_size; } ;
typedef TYPE_5__ tGATT_TCB ;
typedef int tGATT_STATUS ;
struct TYPE_13__ {int handles; int num_handles; } ;
struct TYPE_12__ {int value; int len; int handle; int offset; } ;
struct TYPE_11__ {int handle; int offset; } ;
struct TYPE_10__ {int uuid; int e_handle; int s_handle; } ;
struct TYPE_15__ {TYPE_4__ read_multi; int find_type_value; int exec_write; TYPE_3__ attr_value; TYPE_2__ read_blob; int handle; TYPE_1__ browse; int mtu; } ;
typedef TYPE_6__ tGATT_CL_MSG ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;



 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int,int ,int ,int ) ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 int * FUNC_5 (int const,int ) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int ,int ) ;
 int * FUNC_9 (int ,int,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int,int *) ;

tGATT_STATUS FUNC_11 (tGATT_TCB *VAR_3, UINT16 VAR_4, UINT8 VAR_5, tGATT_CL_MSG *VAR_6)
{
    tGATT_STATUS VAR_7 = VAR_2;
    BT_HDR *VAR_8 = ((void*)0);
    UINT16 VAR_9 = 0, VAR_10;

    if (VAR_3 != ((void*)0)) {
        switch (VAR_5) {
        case 136:
            if (VAR_6->mtu <= VAR_1) {
                VAR_3->payload_size = VAR_6->mtu;
                VAR_8 = FUNC_5(136, VAR_6->mtu);
            } else {
                VAR_7 = VAR_0;
            }
            break;

        case 138:
        case 131:
        case 132:
            if (FUNC_0 (VAR_6->browse.s_handle) &&
                    FUNC_0 (VAR_6->browse.e_handle) &&
                    VAR_6->browse.s_handle <= VAR_6->browse.e_handle) {
                VAR_8 = FUNC_2(VAR_5,
                                              VAR_6->browse.s_handle,
                                              VAR_6->browse.e_handle,
                                              VAR_6->browse.uuid);
            } else {
                VAR_7 = VAR_0;
            }
            break;

        case 133:
            VAR_9 = VAR_6->read_blob.offset;

        case 134:
            VAR_10 = (VAR_5 == 134) ? VAR_6->handle : VAR_6->read_blob.handle;

            if (FUNC_0 (VAR_10)) {
                VAR_8 = FUNC_4(VAR_5, VAR_10, VAR_9);
            } else {
                VAR_7 = VAR_0;
            }
            break;

        case 140:
            VAR_8 = FUNC_6(VAR_5);
            break;

        case 135:
            VAR_9 = VAR_6->attr_value.offset;

        case 129:
        case 141:
        case 128:
            if (FUNC_0 (VAR_6->attr_value.handle)) {
                VAR_8 = FUNC_9 (VAR_3->payload_size,
                                              VAR_5, VAR_6->attr_value.handle,
                                              VAR_9,
                                              VAR_6->attr_value.len,
                                              VAR_6->attr_value.value);
            } else {
                VAR_7 = VAR_0;
            }
            break;

        case 139:
            VAR_8 = FUNC_3(VAR_5, VAR_6->exec_write);
            break;

        case 137:
            VAR_8 = FUNC_7(VAR_3->payload_size, &VAR_6->find_type_value);
            break;

        case 130:
            VAR_8 = FUNC_8(VAR_3->payload_size,
                                              VAR_6->read_multi.num_handles,
                                              VAR_6->read_multi.handles);
            break;

        default:
            break;
        }

        if (VAR_8 != ((void*)0)) {
            VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_8);
        }

    } else {
        FUNC_1("Peer device not connected");
    }

    return VAR_7;
}
