
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_start ;
typedef int time_end ;
typedef scalar_t__ cl_ulong ;
typedef int cl_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,scalar_t__*,int *) ;

cl_ulong FUNC_1(cl_event VAR_2) {
    cl_ulong VAR_3;
    cl_ulong VAR_4;

    FUNC_0(VAR_2, VAR_1, sizeof(VAR_3), &VAR_3, ((void*)0));
    FUNC_0(VAR_2, VAR_0, sizeof(VAR_4), &VAR_4, ((void*)0));

    return VAR_4 - VAR_3;
}
