
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value_size; int key_size; int num_buckets; int num_entries; int magic; } ;
struct TYPE_4__ {int bucket_size; scalar_t__ buckets; int value_size; int key_size; scalar_t__ num_buckets; scalar_t__ num_entries; } ;
typedef int Py_ssize_t ;
typedef char PyObject ;
typedef TYPE_1__ HashIndex ;
typedef TYPE_2__ HashHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,char*,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(HashIndex *VAR_5, PyObject *VAR_6)
{
    PyObject *VAR_7, *VAR_8, *VAR_9;
    Py_ssize_t VAR_10;
    Py_ssize_t VAR_11 = (Py_ssize_t)VAR_5->num_buckets * VAR_5->bucket_size;
    HashHeader VAR_12 = {
        .magic = VAR_0,
        .num_entries = FUNC_9(VAR_5->num_entries),
        .num_buckets = FUNC_9(VAR_5->num_buckets),
        .key_size = VAR_5->key_size,
        .value_size = VAR_5->value_size
    };

    VAR_7 = FUNC_6(VAR_6, "write", "y#", &VAR_12, (Py_ssize_t)sizeof(HashHeader));
    if(FUNC_2()) {
        return;
    }
    VAR_10 = FUNC_5(VAR_7, VAR_3);
    FUNC_7(VAR_7);
    if(FUNC_2()) {
        return;
    }
    if(VAR_10 != sizeof(HashHeader)) {
        FUNC_3(VAR_4, "Failed to write header");
        return;
    }




    VAR_9 = FUNC_6(VAR_6, "hash_part", "s", "HashHeader");
    FUNC_8(VAR_9);
    if(FUNC_2()) {
        if(FUNC_1(VAR_2)) {

            FUNC_0();
        } else {
            return;
        }
    }


    VAR_8 = FUNC_4((char*)VAR_5->buckets, VAR_11, VAR_1);
    if(!VAR_8) {
        FUNC_10(FUNC_2());
        return;
    }
    VAR_7 = FUNC_6(VAR_6, "write", "O", VAR_8);
    FUNC_7(VAR_8);
    if(FUNC_2()) {
        return;
    }
    VAR_10 = FUNC_5(VAR_7, VAR_3);
    FUNC_7(VAR_7);
    if(FUNC_2()) {
        return;
    }
    if(VAR_10 != VAR_11) {
        FUNC_3(VAR_4, "Failed to write buckets");
        return;
    }
}
