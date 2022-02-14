
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;
 int FUNC_1 (unsigned long) ;

const char *FUNC_2(unsigned long VAR_0)
{
 static const char * const VAR_1[] = {
  "PIO0",
  "PIO1",
  "PIO2",
  "PIO3",
  "PIO4",
  "PIO5",
  "PIO6",
  "MWDMA0",
  "MWDMA1",
  "MWDMA2",
  "MWDMA3",
  "MWDMA4",
  "UDMA/16",
  "UDMA/25",
  "UDMA/33",
  "UDMA/44",
  "UDMA/66",
  "UDMA/100",
  "UDMA/133",
  "UDMA7",
 };
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0) - 1;
 if (VAR_2 >= 0 && VAR_2 < FUNC_0(VAR_1))
  return VAR_1[VAR_2];
 return "<n/a>";
}
