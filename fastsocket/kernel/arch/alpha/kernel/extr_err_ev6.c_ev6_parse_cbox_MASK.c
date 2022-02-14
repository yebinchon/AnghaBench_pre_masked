
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_2(u64 VAR_17, u64 VAR_18, u64 VAR_19,
        u64 VAR_20, u64 VAR_21, int VAR_22)
{
 char *VAR_23[] = { "UNKNOWN", "UNKNOWN", "UNKNOWN",
          "MEMORY", "BCACHE", "DCACHE",
          "BCACHE PROBE", "BCACHE PROBE" };
 char *VAR_24[] = { "D", "I" };
 char *VAR_25[] = { "SINGLE", "DOUBLE" };
 int VAR_26 = VAR_14;
 int VAR_27 = -1, VAR_28 = -1, VAR_29 = -1;
 if (!(VAR_20 & (0x1F)))
  return VAR_15;

 if (!VAR_22)
  return VAR_26;

 VAR_27 = FUNC_0(VAR_20, VAR_7);
 VAR_28 = FUNC_0(VAR_20, VAR_4);
 VAR_29 = FUNC_0(VAR_20, VAR_2);

 if (VAR_20 & (0x01)) {
  FUNC_1("%s    Bcache tag parity error\n", VAR_16);
  VAR_27 = -1;
 }

 if (VAR_20 & (0x02)) {
  FUNC_1("%s    Dcache tag parity error\n", VAR_16);
  VAR_27 = -1;
 }

 if (VAR_20 == (0x06) ||
     VAR_20 == (0x07)) {
  FUNC_1("%s    Bcache single-bit error on a probe hit\n",
         VAR_16);
  VAR_27 = -1;
 }

 if (VAR_27 != -1)
  FUNC_1("%s    %s-STREAM %s-BIT ECC error from %s\n",
         VAR_16,
         VAR_24[VAR_28], VAR_25[VAR_29], VAR_23[VAR_27]);

 FUNC_1("%s    Address: 0x%016llx\n"
          "    Syndrome[upper.lower]: %02llx.%02llx\n",
        VAR_16,
        VAR_17,
        VAR_19, VAR_18);

 if (VAR_27 == (0x03) ||
     VAR_27 == (0x04))
  FUNC_1("%s    Block status: %s%s%s%s\n",
         VAR_16,
         (VAR_21 & (1 << 0)) ? "SHARED " : "",
         (VAR_21 & (1 << 1)) ? "DIRTY " : "",
         (VAR_21 & (1 << 2)) ? "VALID " : "",
         (VAR_21 & (1 << 3)) ? "PARITY " : "");

 return VAR_26;
}
