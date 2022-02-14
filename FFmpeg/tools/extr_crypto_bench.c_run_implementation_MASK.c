
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct hash_impl {char* lib; char* name; int (* run ) (int*,int const*,unsigned int) ;scalar_t__ output; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int*,unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int*,int*,unsigned int) ;
 int FUNC_7 (int*,int ,unsigned int) ;
 int FUNC_8 (char*,char*,char*,unsigned int,unsigned int,double,double) ;
 int VAR_3 ;
 double FUNC_9 (double) ;
 int FUNC_10 (scalar_t__,char*,unsigned int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int*,int const*,unsigned int) ;
 int FUNC_13 (int*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_14(const uint8_t *VAR_6, uint8_t *VAR_7,
                               struct hash_impl *VAR_8, unsigned VAR_9)
{
    uint64_t VAR_10, VAR_11;
    unsigned VAR_12 = VAR_3 ? VAR_3 : (1 << 30) / VAR_9;
    unsigned VAR_13 = 0, VAR_14 = 0;
    unsigned VAR_15, VAR_16, VAR_17;
    double VAR_18, VAR_19 = 0, VAR_20 = 0, VAR_21;
    uint8_t VAR_22[VAR_0];

    if (VAR_2 && !FUNC_1(VAR_2, VAR_8->lib) ||
        VAR_1 && !FUNC_1(VAR_1, VAR_8->name))
        return;
    if (!FUNC_10(VAR_8->output, "crc:%x", &VAR_14)) {
        VAR_13 = FUNC_11(VAR_8->output) / 2;
        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
            FUNC_10(VAR_8->output + VAR_15 * 2, "%02x", &VAR_17);
            VAR_22[VAR_15] = VAR_17;
        }
    }
    for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
        VAR_8->run(VAR_7, VAR_6, VAR_9);
    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        FUNC_7(VAR_7, 0, VAR_9);
        VAR_10 = FUNC_0();
        VAR_8->run(VAR_7, VAR_6, VAR_9);
        VAR_11 = FUNC_0();
        if (VAR_13 ? FUNC_6(VAR_7, VAR_22, VAR_13) :
                     FUNC_2(VAR_7, VAR_9) != VAR_14) {
            FUNC_5(VAR_4, "Expected: ");
            if (VAR_13)
                for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
                    FUNC_5(VAR_4, "%02x", VAR_7[VAR_16]);
            else
                FUNC_5(VAR_4, "%08x", FUNC_2(VAR_7, VAR_9));
            FUNC_5(VAR_4, "\n");
            FUNC_3("output mismatch");
        }
        VAR_18 = (double)(VAR_11 - VAR_10) / VAR_9;
        VAR_19 += VAR_18;
        VAR_20 += VAR_18 * VAR_18;
    }

    VAR_19 /= VAR_12;
    VAR_20 /= VAR_12;
    VAR_21 = FUNC_9(VAR_20 - VAR_19 * VAR_19);
    FUNC_8("%-10s %-12s size: %7d  runs: %6d  time: %8.3f +- %.3f\n",
           VAR_8->lib, VAR_8->name, VAR_9, VAR_12, VAR_19, VAR_21);
    FUNC_4(VAR_5);
}
