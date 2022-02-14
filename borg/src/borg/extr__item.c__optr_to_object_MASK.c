
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_4(PyObject *VAR_1)
{
    if(!FUNC_1(VAR_1)) {
        FUNC_3(VAR_0, "Cannot unwrap non-bytes object");
        return ((void*)0);
    }
    if(FUNC_2(VAR_1) != sizeof(void*)) {
        FUNC_3(VAR_0, "Invalid length of bytes object");
        return ((void*)0);
    }
    PyObject *VAR_2 = * (PyObject **) FUNC_0(VAR_1);
    return VAR_2;
}
