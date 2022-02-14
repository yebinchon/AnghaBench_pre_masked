
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int minor; } ;
struct comedi_devconfig {int* options; } ;
struct BondedDevice {int minor; int subdev; int nchans; int chanid_offset; int subdev_type; void* dev; } ;
typedef int file ;
typedef int devs_opened ;
typedef int buf ;
typedef int bdev ;
struct TYPE_2__ {int ndevs; int nchans; scalar_t__* name; struct BondedDevice** devs; struct BondedDevice** chanIdDevMap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 struct BondedDevice** FUNC_1 (struct BondedDevice**,int,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int) ;
 void* FUNC_4 (char*) ;
 TYPE_1__* VAR_5 ;
 struct BondedDevice* FUNC_5 (int,int ) ;
 int FUNC_6 (void**,int ,int) ;
 int FUNC_7 (char*,int,char*,int,...) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_6, struct comedi_devconfig *VAR_7)
{
 int VAR_8;
 void *VAR_9[VAR_1];

 FUNC_6(VAR_9, 0, sizeof(VAR_9));
 VAR_5->name[0] = 0;;


 for (VAR_8 = 0; VAR_8 < VAR_0 && (!VAR_8 || VAR_7->options[VAR_8]); ++VAR_8) {
  char VAR_10[] = "/dev/comediXXXXXX";
  int VAR_11 = VAR_7->options[VAR_8];
  void *VAR_12;
  int VAR_13 = -1, VAR_14, VAR_15;
  struct BondedDevice *VAR_16 = ((void*)0);

  if (VAR_11 < 0 || VAR_11 > VAR_1) {
   FUNC_0("Minor %d is invalid!\n", VAR_11);
   return 0;
  }
  if (VAR_11 == VAR_6->minor) {
   FUNC_0("Cannot bond this driver to itself!\n");
   return 0;
  }
  if (VAR_9[VAR_11]) {
   FUNC_0("Minor %d specified more than once!\n", VAR_11);
   return 0;
  }

  FUNC_7(VAR_10, sizeof(VAR_10), "/dev/comedi%u", VAR_11);
  VAR_10[sizeof(VAR_10) - 1] = 0;

  VAR_12 = VAR_9[VAR_11] = FUNC_4(VAR_10);

  if (!VAR_12) {
   FUNC_0("Minor %u could not be opened\n", VAR_11);
   return 0;
  }


  while ((VAR_13 = FUNC_2(VAR_12, VAR_2,
            VAR_13 + 1)) > -1) {
   VAR_14 = FUNC_3(VAR_12, VAR_13);
   if (VAR_14 <= 0) {
    FUNC_0("comedi_get_n_channels() returned %d "
          "on minor %u subdev %d!\n",
          VAR_14, VAR_11, VAR_13);
    return 0;
   }
   VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
   if (!VAR_16) {
    FUNC_0("Out of memory.\n");
    return 0;
   }
   VAR_16->dev = VAR_12;
   VAR_16->minor = VAR_11;
   VAR_16->subdev = VAR_13;
   VAR_16->subdev_type = VAR_2;
   VAR_16->nchans = VAR_14;
   VAR_16->chanid_offset = VAR_5->nchans;


   while (VAR_14--)
    VAR_5->chanIdDevMap[VAR_5->nchans++] = VAR_16;





   VAR_15 = VAR_5->ndevs * sizeof(VAR_16);
   VAR_5->devs =
       FUNC_1(VAR_5->devs,
        ++VAR_5->ndevs * sizeof(VAR_16), VAR_15);
   if (!VAR_5->devs) {
    FUNC_0("Could not allocate memory. "
          "Out of memory?");
    return 0;
   }

   VAR_5->devs[VAR_5->ndevs - 1] = VAR_16;
   {

    char VAR_17[20];
    int VAR_18 =
        VAR_4 - FUNC_8(VAR_5->name) - 1;
    FUNC_7(VAR_17, sizeof(VAR_17), "%d:%d ", VAR_6->minor,
      VAR_16->subdev);
    VAR_17[sizeof(VAR_17) - 1] = 0;
    FUNC_9(VAR_5->name, VAR_17, VAR_18);
   }

  }
 }

 if (!VAR_5->nchans) {
  FUNC_0("No channels found!\n");
  return 0;
 }

 return 1;
}
