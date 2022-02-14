
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int iface; } ;
typedef TYPE_1__ joydata_t ;
typedef int io_object_t ;
struct TYPE_8__ {scalar_t__ (* QueryInterface ) (TYPE_2__**,int ,int ) ;int (* Release ) (TYPE_2__**) ;} ;
typedef int SInt32 ;
typedef int LPVOID ;
typedef TYPE_2__ IOCFPlugInInterface ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_2__***,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_2__**,int ,int ) ;
 int FUNC_3 (TYPE_2__**) ;

__attribute__((used)) static int FUNC_4(io_object_t VAR_5, joydata_t *VAR_6) {
    IOCFPlugInInterface **VAR_7;
    SInt32 VAR_8 = 0;



    if(FUNC_1(VAR_5,
                                         VAR_3,
                                         VAR_1, &VAR_7,
                                         &VAR_8) != VAR_4) {
        return 0;
    }


    if((*VAR_7)->QueryInterface(VAR_7,
                                 FUNC_0(VAR_2),
                                 (LPVOID)&VAR_6->iface) != VAR_0) {
        return 0;
    }


    (*VAR_7)->Release(VAR_7);

    return 1;
}
