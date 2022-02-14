
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transport_attrs {scalar_t__ offset; size_t period; scalar_t__ width; scalar_t__ hold_mcs; scalar_t__ pcomp_en; scalar_t__ wr_flow; scalar_t__ rti; scalar_t__ rd_strm; scalar_t__ qas; scalar_t__ iu; scalar_t__ dt; } ;
struct scsi_target {int dev; int starget_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,char*,...) ;
 unsigned int* VAR_1 ;
 int FUNC_1 (char*,unsigned int,int) ;

void FUNC_2(struct scsi_target *VAR_2)
{
 struct spi_transport_attrs *VAR_3;
 VAR_3 = (struct spi_transport_attrs *)&VAR_2->starget_data;

 if (VAR_3->offset > 0 && VAR_3->period > 0) {
  unsigned int VAR_4, VAR_5;
  char *VAR_6 = "FAST-?";
  char VAR_7[8];

  if (VAR_3->period <= VAR_0) {
   VAR_4 = VAR_1[VAR_3->period];
   switch (VAR_3->period) {
    case 7: VAR_6 = "FAST-320"; break;
    case 8: VAR_6 = "FAST-160"; break;
    case 9: VAR_6 = "FAST-80"; break;
    case 10:
    case 11: VAR_6 = "FAST-40"; break;
    case 12: VAR_6 = "FAST-20"; break;
   }
  } else {
   VAR_4 = VAR_3->period * 4000;
   if (VAR_3->period < 25)
    VAR_6 = "FAST-20";
   else if (VAR_3->period < 50)
    VAR_6 = "FAST-10";
   else
    VAR_6 = "FAST-5";
  }

  VAR_5 = (10000000 + VAR_4 / 2) / VAR_4;
  if (VAR_3->width)
   VAR_5 *= 2;
  FUNC_1(VAR_7, VAR_4, 1000);

  FUNC_0(&VAR_2->dev,
    "%s %sSCSI %d.%d MB/s %s%s%s%s%s%s%s%s (%s ns, offset %d)\n",
    VAR_6, VAR_3->width ? "WIDE " : "", VAR_5/10, VAR_5 % 10,
    VAR_3->dt ? "DT" : "ST",
    VAR_3->iu ? " IU" : "",
    VAR_3->qas ? " QAS" : "",
    VAR_3->rd_strm ? " RDSTRM" : "",
    VAR_3->rti ? " RTI" : "",
    VAR_3->wr_flow ? " WRFLOW" : "",
    VAR_3->pcomp_en ? " PCOMP" : "",
    VAR_3->hold_mcs ? " HMCS" : "",
    VAR_7, VAR_3->offset);
 } else {
  FUNC_0(&VAR_2->dev, "%sasynchronous\n",
    VAR_3->width ? "wide " : "");
 }
}
