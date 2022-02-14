
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tValuePair ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int STwaInfo ;
typedef int STopBotInfo ;
typedef int SSumInfo ;
typedef int SStddevInfo ;
typedef int SSpreadInfo ;
typedef int SResultInfo ;
typedef int SLastrowInfo ;
typedef int SHistogramInfo ;
typedef int SHistBin ;
typedef int SFirstLastInfo ;
typedef int SAvgInfo ;
typedef int SAPercentileInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

int32_t FUNC_2(int32_t VAR_38, int32_t VAR_39, int32_t VAR_40, int32_t VAR_41, int16_t *VAR_42,
                          int16_t *VAR_43, int16_t *VAR_44, int16_t VAR_45, bool VAR_46) {
  if (!FUNC_0(VAR_38, VAR_39)) {
    FUNC_1("Illegal data type %d or data type length %d", VAR_38, VAR_39);
    return VAR_4;
  }

  if (VAR_40 == VAR_34 || VAR_40 == VAR_36 || VAR_40 == VAR_32 ||
      VAR_40 == VAR_15 || VAR_40 == VAR_26 || VAR_40 == VAR_31 ||
      VAR_40 == VAR_30 || VAR_40 == VAR_18) {
    *VAR_42 = (int16_t)VAR_38;
    *VAR_43 = (int16_t)VAR_39;
    *VAR_44 = *VAR_43 + sizeof(SResultInfo);
    return VAR_5;
  }

  if (VAR_40 == VAR_14) {
    *VAR_42 = VAR_6;
    *VAR_43 = sizeof(int64_t);
    *VAR_44 = *VAR_43;
    return VAR_5;
  }

  if (VAR_40 == VAR_11) {
    *VAR_42 = VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 = *VAR_43;
    return VAR_5;
  }

  if (VAR_40 == VAR_35) {
    *VAR_42 = VAR_7;
    *VAR_43 = sizeof(int32_t);
    *VAR_44 = VAR_2;
    return VAR_5;
  }

  if (VAR_46) {
    if (VAR_40 == VAR_24 || VAR_40 == VAR_23) {
      *VAR_42 = VAR_7;
      *VAR_43 = VAR_39 + VAR_0;
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_29) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(SSumInfo);
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_12) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(SAvgInfo);
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_33 || VAR_40 == VAR_13) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(STopBotInfo) + (sizeof(tValuePair) + VAR_2 + VAR_45) * VAR_41;
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_27) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(SSpreadInfo);
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_10) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(SHistBin) * (VAR_1 + 1) + sizeof(SHistogramInfo) + sizeof(SAPercentileInfo);
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_21) {
      *VAR_42 = VAR_7;
      *VAR_43 = sizeof(SLastrowInfo) + VAR_39;
      *VAR_44 = *VAR_43;

      return VAR_5;
    } else if (VAR_40 == VAR_37) {
      *VAR_42 = VAR_8;
      *VAR_43 = sizeof(STwaInfo);
      *VAR_44 = sizeof(STwaInfo);
      return VAR_5;
    }
  }

  if (VAR_40 == VAR_29) {
    if (VAR_38 >= VAR_9 && VAR_38 <= VAR_6) {
      *VAR_42 = VAR_6;
    } else {
      *VAR_42 = VAR_8;
    }

    *VAR_43 = sizeof(int64_t);
    *VAR_44 = sizeof(SSumInfo);
    return VAR_5;
  } else if (VAR_40 == VAR_10) {
    *VAR_42 = VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 =
        sizeof(SAPercentileInfo) + sizeof(SHistogramInfo) + sizeof(SHistBin) * (VAR_1 + 1);
    return VAR_5;
  } else if (VAR_40 == VAR_37) {
    *VAR_42 = VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 = sizeof(STwaInfo);
    return VAR_5;
  }

  if (VAR_40 == VAR_12) {
    *VAR_42 = VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 = sizeof(SAvgInfo);
  } else if (VAR_40 == VAR_28) {
    *VAR_42 = VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 = sizeof(SStddevInfo);
  } else if (VAR_40 == VAR_24 || VAR_40 == VAR_23) {
    *VAR_42 = (int16_t)VAR_38;
    *VAR_43 = (int16_t)VAR_39;
    *VAR_44 = VAR_39 + VAR_0;
  } else if (VAR_40 == VAR_16 || VAR_40 == VAR_19) {
    *VAR_42 = (int16_t)VAR_38;
    *VAR_43 = (int16_t)VAR_39;
    *VAR_44 = VAR_39 + sizeof(SResultInfo);
  } else if (VAR_40 == VAR_27) {
    *VAR_42 = (int16_t)VAR_8;
    *VAR_43 = sizeof(double);
    *VAR_44 = sizeof(SSpreadInfo);
  } else if (VAR_40 == VAR_25) {
    *VAR_42 = (int16_t)VAR_8;
    *VAR_43 = (int16_t)sizeof(double);

    *VAR_44 = (int16_t)sizeof(double);
  } else if (VAR_40 == VAR_22) {
    *VAR_42 = VAR_7;
    *VAR_43 = VAR_3;
    *VAR_44 = *VAR_43 + sizeof(SResultInfo);
  } else if (VAR_40 == VAR_17 || VAR_40 == VAR_20) {
    *VAR_42 = VAR_7;
    *VAR_43 = VAR_39 + sizeof(SFirstLastInfo);
    *VAR_44 = *VAR_43;
  } else if (VAR_40 == VAR_33 || VAR_40 == VAR_13) {
    *VAR_42 = (int16_t)VAR_38;
    *VAR_43 = (int16_t)VAR_39;

    size_t VAR_47 = sizeof(STopBotInfo) + (sizeof(tValuePair) + VAR_2 + VAR_45) * VAR_41;


    *VAR_44 = VAR_47;
  } else if (VAR_40 == VAR_21) {
    *VAR_42 = (int16_t)VAR_38;
    *VAR_43 = (int16_t)VAR_39;
    *VAR_44 = VAR_39 + sizeof(SLastrowInfo);
  } else {
    return VAR_4;
  }

  return VAR_5;
}
