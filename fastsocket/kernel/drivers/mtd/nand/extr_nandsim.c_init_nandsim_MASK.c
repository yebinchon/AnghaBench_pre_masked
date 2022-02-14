
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ totsz; unsigned long long pgsz; unsigned long long oobsz; int secsz; unsigned long long pgszoob; unsigned long long pgnum; unsigned long long secshift; unsigned long long pgshift; unsigned long long oobshift; int pgsec; int secszoob; int pgaddrbytes; int secaddrbytes; scalar_t__ totszoob; } ;
struct TYPE_5__ {int byte; } ;
struct nandsim {int busw; int options; int nbparts; TYPE_2__ geom; TYPE_1__ buf; TYPE_4__* partitions; } ;
struct nand_chip {int options; unsigned long long page_shift; scalar_t__ chip_delay; scalar_t__ priv; } ;
struct mtd_info {scalar_t__ size; unsigned long long writesize; unsigned long long oobsize; int erasesize; scalar_t__ priv; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ offset; void* name; } ;
struct TYPE_7__ {scalar_t__ id; int options; int * name; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct nandsim*) ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct nandsim*) ;
 unsigned long long FUNC_5 (scalar_t__,unsigned long long) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct nandsim*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int,int) ;
 TYPE_3__* VAR_12 ;
 scalar_t__* VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (char*,unsigned long long) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static int FUNC_12(struct mtd_info *VAR_16)
{
 struct nand_chip *VAR_17 = (struct nand_chip *)VAR_16->priv;
 struct nandsim *VAR_18 = (struct nandsim *)(VAR_17->priv);
 int VAR_19, VAR_20 = 0;
 uint64_t VAR_21;
 uint64_t VAR_22;

 if (FUNC_2(VAR_18)) {
  FUNC_1("init_nandsim: nandsim is already initialized\n");
  return -VAR_1;
 }


 VAR_17->chip_delay = 0;


 VAR_18->busw = VAR_17->options & VAR_4 ? 16 : 8;
 VAR_18->geom.totsz = VAR_16->size;
 VAR_18->geom.pgsz = VAR_16->writesize;
 VAR_18->geom.oobsz = VAR_16->oobsize;
 VAR_18->geom.secsz = VAR_16->erasesize;
 VAR_18->geom.pgszoob = VAR_18->geom.pgsz + VAR_18->geom.oobsz;
 VAR_18->geom.pgnum = FUNC_5(VAR_18->geom.totsz, VAR_18->geom.pgsz);
 VAR_18->geom.totszoob = VAR_18->geom.totsz + (uint64_t)VAR_18->geom.pgnum * VAR_18->geom.oobsz;
 VAR_18->geom.secshift = FUNC_6(VAR_18->geom.secsz) - 1;
 VAR_18->geom.pgshift = VAR_17->page_shift;
 VAR_18->geom.oobshift = FUNC_6(VAR_18->geom.oobsz) - 1;
 VAR_18->geom.pgsec = VAR_18->geom.secsz / VAR_18->geom.pgsz;
 VAR_18->geom.secszoob = VAR_18->geom.secsz + VAR_18->geom.oobsz * VAR_18->geom.pgsec;
 VAR_18->options = 0;

 if (VAR_18->geom.pgsz == 256) {
  VAR_18->options |= VAR_8;
 }
 else if (VAR_18->geom.pgsz == 512) {
  VAR_18->options |= (VAR_9 | VAR_6);
  if (VAR_18->busw == 8)
   VAR_18->options |= VAR_10;
 } else if (VAR_18->geom.pgsz == 2048) {
  VAR_18->options |= VAR_7;
 } else {
  FUNC_1("init_nandsim: unknown page size %u\n", VAR_18->geom.pgsz);
  return -VAR_1;
 }

 if (VAR_18->options & VAR_11) {
  if (VAR_18->geom.totsz <= (32 << 20)) {
   VAR_18->geom.pgaddrbytes = 3;
   VAR_18->geom.secaddrbytes = 2;
  } else {
   VAR_18->geom.pgaddrbytes = 4;
   VAR_18->geom.secaddrbytes = 3;
  }
 } else {
  if (VAR_18->geom.totsz <= (128 << 20)) {
   VAR_18->geom.pgaddrbytes = 4;
   VAR_18->geom.secaddrbytes = 2;
  } else {
   VAR_18->geom.pgaddrbytes = 5;
   VAR_18->geom.secaddrbytes = 3;
  }
 }


 if (VAR_14 > FUNC_0(VAR_18->partitions)) {
  FUNC_1("too many partitions.\n");
  VAR_20 = -VAR_0;
  goto error;
 }
 VAR_21 = VAR_18->geom.totsz;
 VAR_22 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_14; ++VAR_19) {
  uint64_t VAR_23 = (uint64_t)VAR_13[VAR_19] * VAR_18->geom.secsz;

  if (!VAR_23 || VAR_23 > VAR_21) {
   FUNC_1("bad partition size.\n");
   VAR_20 = -VAR_0;
   goto error;
  }
  VAR_18->partitions[VAR_19].name = FUNC_8(VAR_19);
  VAR_18->partitions[VAR_19].offset = VAR_22;
  VAR_18->partitions[VAR_19].size = VAR_23;
  VAR_22 += VAR_18->partitions[VAR_19].size;
  VAR_21 -= VAR_18->partitions[VAR_19].size;
 }
 VAR_18->nbparts = VAR_14;
 if (VAR_21) {
  if (VAR_14 + 1 > FUNC_0(VAR_18->partitions)) {
   FUNC_1("too many partitions.\n");
   VAR_20 = -VAR_0;
   goto error;
  }
  VAR_18->partitions[VAR_19].name = FUNC_8(VAR_19);
  VAR_18->partitions[VAR_19].offset = VAR_22;
  VAR_18->partitions[VAR_19].size = VAR_21;
  VAR_18->nbparts += 1;
 }


        for (VAR_19 = 0; VAR_12[VAR_19].name != ((void*)0); VAR_19++) {
                if (VAR_15 != VAR_12[VAR_19].id)
                        continue;
  if (!(VAR_12[VAR_19].options & VAR_5))
   VAR_18->options |= VAR_6;
 }

 if (VAR_18->busw == 16)
  FUNC_3("16-bit flashes support wasn't tested\n");

 FUNC_11("flash size: %llu MiB\n",
   (unsigned long long)VAR_18->geom.totsz >> 20);
 FUNC_11("page size: %u bytes\n", VAR_18->geom.pgsz);
 FUNC_11("OOB area size: %u bytes\n", VAR_18->geom.oobsz);
 FUNC_11("sector size: %u KiB\n", VAR_18->geom.secsz >> 10);
 FUNC_11("pages number: %u\n", VAR_18->geom.pgnum);
 FUNC_11("pages per sector: %u\n", VAR_18->geom.pgsec);
 FUNC_11("bus width: %u\n", VAR_18->busw);
 FUNC_11("bits in sector size: %u\n", VAR_18->geom.secshift);
 FUNC_11("bits in page size: %u\n", VAR_18->geom.pgshift);
 FUNC_11("bits in OOB size: %u\n", VAR_18->geom.oobshift);
 FUNC_11("flash size with OOB: %llu KiB\n",
   (unsigned long long)VAR_18->geom.totszoob >> 10);
 FUNC_11("page address bytes: %u\n", VAR_18->geom.pgaddrbytes);
 FUNC_11("sector address bytes: %u\n", VAR_18->geom.secaddrbytes);
 FUNC_11("options: %#x\n", VAR_18->options);

 if ((VAR_20 = FUNC_4(VAR_18)) != 0)
  goto error;


 VAR_18->buf.byte = FUNC_9(VAR_18->geom.pgszoob, VAR_3);
 if (!VAR_18->buf.byte) {
  FUNC_1("init_nandsim: unable to allocate %u bytes for the internal buffer\n",
   VAR_18->geom.pgszoob);
  VAR_20 = -VAR_2;
  goto error;
 }
 FUNC_10(VAR_18->buf.byte, 0xFF, VAR_18->geom.pgszoob);

 return 0;

error:
 FUNC_7(VAR_18);

 return VAR_20;
}
