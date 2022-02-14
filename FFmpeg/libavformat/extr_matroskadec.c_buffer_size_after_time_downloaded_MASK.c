
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_3__ {int start_time_ns; double end_time_ns; double end_offset; double start_offset; } ;
typedef TYPE_1__ CueDesc ;
typedef int AVFormatContext ;


 TYPE_1__ FUNC_0 (int *,double,double) ;

__attribute__((used)) static int FUNC_1(int64_t VAR_0, double VAR_1, int64_t VAR_2,
                                             double VAR_3, double* VAR_4,
                                             double* VAR_5, AVFormatContext *VAR_6,
                                             int64_t VAR_7)
{
    double VAR_8 = 1000000000.0;
    double VAR_9 = VAR_0 / VAR_8;
    int VAR_10 = 0;
    int64_t VAR_11 = (int64_t)(VAR_1 * VAR_8);
    int64_t VAR_12 = VAR_0 + VAR_11;
    double VAR_13 = 0.0;
    CueDesc VAR_14 = FUNC_0(VAR_6, VAR_0, VAR_7);
    if (VAR_14.start_time_ns == -1)
      return -1;
    *VAR_5 = 0.0;


    if (VAR_0 > VAR_14.start_time_ns) {
      int64_t VAR_15 = VAR_14.end_time_ns - VAR_0;
      double VAR_16 = (double)(VAR_15) / (VAR_14.end_time_ns - VAR_14.start_time_ns);
      double VAR_17 = (VAR_14.end_offset - VAR_14.start_offset) * VAR_16;
      double VAR_18 = (VAR_17 * 8.0) / VAR_2;

      VAR_13 += (VAR_15 / VAR_8) - VAR_18;
      *VAR_5 += VAR_18;


      if (VAR_14.end_time_ns >= VAR_12) {
          double VAR_19 = VAR_14.end_time_ns / VAR_8;
          double VAR_20 = VAR_1 / (VAR_19 - VAR_9);
          VAR_13 = VAR_20 * VAR_13;
          *VAR_5 = VAR_20 * *VAR_5;
      }

      if ((VAR_13 + *VAR_4) <= VAR_3) {
          return 1;
      }


      VAR_14 = FUNC_0(VAR_6, VAR_14.end_time_ns, VAR_7);
    }

    while (VAR_14.start_time_ns != -1) {
        int64_t VAR_21 = VAR_14.end_offset - VAR_14.start_offset;
        int64_t VAR_22 = VAR_14.end_time_ns - VAR_14.start_time_ns;
        double VAR_23 = VAR_22 / VAR_8;
        double VAR_24 = (VAR_21 * 8.0);
        double VAR_25 = VAR_24 / VAR_2;

        VAR_13 += VAR_23 - VAR_25;
        *VAR_5 += VAR_25;

        if (VAR_14.end_time_ns >= VAR_12) {
            double VAR_26 = VAR_14.end_time_ns / VAR_8;
            double VAR_27 = VAR_1 / (VAR_26 - VAR_9);
            VAR_13 = VAR_27 * VAR_13;
            *VAR_5 = VAR_27 * *VAR_5;

            if ((VAR_13 + *VAR_4) <= VAR_3)
                VAR_10 = 1;
            break;
        }

        if ((VAR_13 + *VAR_4) <= VAR_3) {
            VAR_10 = 1;
            break;
        }

        VAR_14 = FUNC_0(VAR_6, VAR_14.end_time_ns, VAR_7);
    }
    *VAR_4 = *VAR_4 + VAR_13;
    return VAR_10;
}
