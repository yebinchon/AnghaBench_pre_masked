
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {float tv_sec; float tv_usec; } ;
typedef int FILE ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (char*,...) ;
 size_t FUNC_9 (int ,void*,size_t) ;
 int FUNC_10 (int ,void*,size_t) ;

void FUNC_11(const char* VAR_0, void* VAR_1, size_t VAR_2, size_t VAR_3, bool VAR_4)
{
    const size_t VAR_5 = VAR_3 / VAR_2;

    FILE* VAR_6 = FUNC_6(VAR_0, (VAR_4) ? "wb" : "rb");
    FUNC_1(VAR_6);

    struct timeval VAR_7;
    FUNC_7(&VAR_7, ((void*)0));
    for (size_t VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
        if (VAR_4) {
            FUNC_0(VAR_2, FUNC_10(FUNC_5(VAR_6), VAR_1, VAR_2));
        } else {
            if (FUNC_9(FUNC_5(VAR_6), VAR_1, VAR_2) != VAR_2) {
                FUNC_8("reading at n=%d, eof=%d", VAR_8, FUNC_4(VAR_6));
                FUNC_2();
            }
        }
    }

    struct timeval VAR_9;
    FUNC_7(&VAR_9, ((void*)0));

    FUNC_0(0, FUNC_3(VAR_6));

    float VAR_10 = VAR_9.tv_sec - VAR_7.tv_sec + 1e-6f * (VAR_9.tv_usec - VAR_7.tv_usec);
    FUNC_8("%s %d bytes (block size %d) in %.3fms (%.3f MB/s)\n",
            (VAR_4)?"Wrote":"Read", VAR_3, VAR_2, VAR_10 * 1e3,
                    VAR_3 / (1024.0f * 1024.0f * VAR_10));
}
