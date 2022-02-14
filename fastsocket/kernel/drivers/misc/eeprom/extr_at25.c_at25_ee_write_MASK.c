
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {unsigned int page_size; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct at25_data {int addrlen; int lock; TYPE_3__* spi; TYPE_2__ chip; TYPE_1__ bin; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,int ) ;
 unsigned int VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,char const*,unsigned int) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 size_t FUNC_11 (TYPE_3__*,int *,unsigned int) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static ssize_t
FUNC_14(struct at25_data *VAR_11, const char *VAR_12, loff_t VAR_13,
       size_t VAR_14)
{
 ssize_t VAR_15 = 0;
 unsigned VAR_16 = 0;
 unsigned VAR_17;
 u8 *VAR_18;

 if (FUNC_13(VAR_13 >= VAR_11->bin.size))
  return -VAR_5;
 if ((VAR_13 + VAR_14) > VAR_11->bin.size)
  VAR_14 = VAR_11->bin.size - VAR_13;
 if (FUNC_13(!VAR_14))
  return VAR_14;


 VAR_17 = VAR_11->chip.page_size;
 if (VAR_17 > VAR_9)
  VAR_17 = VAR_9;
 VAR_18 = FUNC_4(VAR_17 + VAR_11->addrlen + 1, VAR_8);
 if (!VAR_18)
  return -VAR_6;




 VAR_18[0] = VAR_3;
 FUNC_8(&VAR_11->lock);
 do {
  unsigned long VAR_19, VAR_20;
  unsigned VAR_21;
  unsigned VAR_22 = (unsigned) VAR_13;
  u8 *VAR_23 = VAR_18 + 1;
  int VAR_24;

  *VAR_23 = VAR_2;
  VAR_15 = FUNC_11(VAR_11->spi, VAR_23, 1);
  if (VAR_15 < 0) {
   FUNC_0(&VAR_11->spi->dev, "WREN --> %d\n",
     (int) VAR_15);
   break;
  }


  switch (VAR_11->addrlen) {
  default:
   *VAR_23++ = VAR_22 >> 16;
  case 2:
   *VAR_23++ = VAR_22 >> 8;
  case 1:
  case 0:
   *VAR_23++ = VAR_22 >> 0;
  }


  VAR_21 = VAR_17 - (VAR_22 % VAR_17);
  if (VAR_21 > VAR_14)
   VAR_21 = VAR_14;
  FUNC_5(VAR_23, VAR_12, VAR_21);
  VAR_15 = FUNC_11(VAR_11->spi, VAR_18,
    VAR_21 + VAR_11->addrlen + 1);
  FUNC_0(&VAR_11->spi->dev,
    "write %u bytes at %u --> %d\n",
    VAR_21, VAR_22, (int) VAR_15);
  if (VAR_15 < 0)
   break;






  VAR_19 = VAR_10 + FUNC_6(VAR_4);
  VAR_20 = 0;
  do {

   VAR_24 = FUNC_10(VAR_11->spi, VAR_0);
   if (VAR_24 < 0 || (VAR_24 & VAR_1)) {
    FUNC_0(&VAR_11->spi->dev,
     "rdsr --> %d (%02x)\n", VAR_24, VAR_24);

    FUNC_7(1);
    continue;
   }
   if (!(VAR_24 & VAR_1))
    break;
  } while (VAR_20++ < 3 || FUNC_12(VAR_10, VAR_19));

  if ((VAR_24 < 0) || (VAR_24 & VAR_1)) {
   FUNC_1(&VAR_11->spi->dev,
    "write %d bytes offset %d, "
    "timeout after %u msecs\n",
    VAR_21, VAR_22,
    FUNC_2(VAR_10 -
     (VAR_19 - VAR_4)));
   VAR_15 = -VAR_7;
   break;
  }

  VAR_13 += VAR_21;
  VAR_12 += VAR_21;
  VAR_14 -= VAR_21;
  VAR_16 += VAR_21;

 } while (VAR_14 > 0);

 FUNC_9(&VAR_11->lock);

 FUNC_3(VAR_18);
 return VAR_16 ? VAR_16 : VAR_15;
}
