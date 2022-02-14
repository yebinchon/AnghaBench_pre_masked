
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int key_size; int value_size; int num_buckets; int num_entries; int magic; } ;
struct TYPE_12__ {scalar_t__ buf; } ;
struct TYPE_13__ {int key_size; int value_size; int bucket_size; scalar_t__ min_empty; scalar_t__ num_empty; void* num_buckets; TYPE_1__ buckets_buffer; scalar_t__ buckets; int upper_limit; int lower_limit; void* num_entries; } ;
typedef int Py_ssize_t ;
typedef TYPE_1__ Py_buffer ;
typedef int PyObject ;
typedef TYPE_2__ HashIndex ;
typedef TYPE_3__ HashHeader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,char*,char*,...) ;
 int FUNC_9 (int *,TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (void*) ;
 scalar_t__ FUNC_17 (void*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,void*) ;
 TYPE_2__* FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int ,int ,int ) ;

__attribute__((used)) static HashIndex *
FUNC_23(PyObject *VAR_8, int VAR_9)
{
    Py_ssize_t VAR_10, VAR_11, VAR_12;
    Py_buffer VAR_13;
    PyObject *VAR_14, *VAR_15, *VAR_16, *VAR_17;
    HashHeader *VAR_18;
    HashIndex *VAR_19 = ((void*)0);

    VAR_14 = FUNC_8(VAR_8, "read", "n", (Py_ssize_t)sizeof(HashHeader));
    if(!VAR_14) {
        FUNC_13(FUNC_6());
        goto fail;
    }

    VAR_12 = FUNC_1(VAR_14);
    if(FUNC_6()) {

        goto fail_decref_header;
    }
    if(VAR_12 != sizeof(HashHeader)) {


        FUNC_4(VAR_5, "Could not read header (expected %zu, but read %zd bytes)",
                     sizeof(HashHeader), VAR_12);
        goto fail_decref_header;
    }





    VAR_17 = FUNC_8(VAR_8, "hash_part", "s", "HashHeader");
    FUNC_11(VAR_17);
    if(FUNC_6()) {
        if(FUNC_3(VAR_3)) {

            FUNC_2();
        } else {
            goto fail_decref_header;
        }
    }


    VAR_15 = FUNC_8(VAR_8, "seek", "ni", (Py_ssize_t)0, VAR_6);
    if(FUNC_6()) {
        goto fail_decref_header;
    }
    VAR_10 = FUNC_7(VAR_15, VAR_4);
    FUNC_10(VAR_15);
    if(FUNC_6()) {

        goto fail_decref_header;
    }

    VAR_17 = FUNC_8(VAR_8, "seek", "ni", (Py_ssize_t)sizeof(HashHeader), VAR_7);
    FUNC_11(VAR_17);
    if(FUNC_6()) {
        goto fail_decref_header;
    }


    if(!(VAR_19 = FUNC_21(sizeof(HashIndex)))) {
        FUNC_5();
        goto fail_decref_header;
    }

    FUNC_9(VAR_14, &VAR_13, VAR_2);
    if(FUNC_6()) {
        goto fail_free_index;
    }

    VAR_18 = (HashHeader*) VAR_13.buf;
    if(FUNC_22(VAR_18->magic, VAR_0, VAR_1)) {
        FUNC_4(VAR_5, "Unknown MAGIC in header");
        goto fail_release_header_buffer;
    }

    VAR_11 = (Py_ssize_t)FUNC_12(VAR_18->num_buckets) * (VAR_18->key_size + VAR_18->value_size);
    if((Py_ssize_t)VAR_10 != (Py_ssize_t)sizeof(HashHeader) + VAR_11) {
        FUNC_4(VAR_5, "Incorrect file length (expected %zd, got %zd)",
                     sizeof(HashHeader) + VAR_11, VAR_10);
        goto fail_release_header_buffer;
    }

    VAR_19->num_entries = FUNC_12(VAR_18->num_entries);
    VAR_19->num_buckets = FUNC_12(VAR_18->num_buckets);
    VAR_19->key_size = VAR_18->key_size;
    VAR_19->value_size = VAR_18->value_size;
    VAR_19->bucket_size = VAR_19->key_size + VAR_19->value_size;
    VAR_19->lower_limit = FUNC_16(VAR_19->num_buckets);
    VAR_19->upper_limit = FUNC_18(VAR_19->num_buckets);
    VAR_16 = FUNC_8(VAR_8, "read", "n", VAR_11);
    if(!VAR_16) {
        FUNC_13(FUNC_6());
        goto fail_release_header_buffer;
    }
    VAR_12 = FUNC_1(VAR_16);
    if(FUNC_6()) {

        goto fail_decref_buckets;
    }
    if(VAR_12 != VAR_11) {
        FUNC_4(VAR_5, "Could not read buckets (expected %zd, got %zd)", VAR_11, VAR_12);
        goto fail_decref_buckets;
    }

    FUNC_9(VAR_16, &VAR_19->buckets_buffer, VAR_2);
    if(FUNC_6()) {
        goto fail_decref_buckets;
    }
    VAR_19->buckets = VAR_19->buckets_buffer.buf;

    if(!VAR_9) {
        VAR_19->min_empty = FUNC_17(VAR_19->num_buckets);
        VAR_19->num_empty = FUNC_14(VAR_19);

        if(VAR_19->num_empty < VAR_19->min_empty) {

            if(!FUNC_20(VAR_19, VAR_19->num_buckets)) {
                FUNC_4(VAR_5, "Failed to rebuild table");
                goto fail_free_buckets;
            }
        }
    }






fail_free_buckets:
    if(FUNC_6()) {
        FUNC_19(VAR_19);
    }
fail_decref_buckets:
    FUNC_10(VAR_16);
fail_release_header_buffer:
    FUNC_0(&VAR_13);
fail_free_index:
    if(FUNC_6()) {
        FUNC_15(VAR_19);
        VAR_19 = ((void*)0);
    }
fail_decref_header:
    FUNC_10(VAR_14);
fail:
    return VAR_19;
}
