
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubi_vtbl_record {int upd_marker; int vol_type; char* name; int name_len; int crc; int data_pad; int alignment; int reserved_pebs; } ;
struct ubi_device {int vtbl_slots; int leb_size; int min_io_size; int good_peb_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct ubi_vtbl_record const*,int ) ;
 int FUNC_4 (char*,int,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct ubi_vtbl_record const*,int *,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (struct ubi_vtbl_record const*,int) ;
 int FUNC_9 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_10(const struct ubi_device *VAR_8,
        const struct ubi_vtbl_record *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 uint32_t VAR_19;
 const char *VAR_20;

 for (VAR_10 = 0; VAR_10 < VAR_8->vtbl_slots; VAR_10++) {
  FUNC_2();

  VAR_12 = FUNC_1(VAR_9[VAR_10].reserved_pebs);
  VAR_13 = FUNC_1(VAR_9[VAR_10].alignment);
  VAR_14 = FUNC_1(VAR_9[VAR_10].data_pad);
  VAR_17 = VAR_9[VAR_10].upd_marker;
  VAR_15 = VAR_9[VAR_10].vol_type;
  VAR_16 = FUNC_0(VAR_9[VAR_10].name_len);
  VAR_20 = &VAR_9[VAR_10].name[0];

  VAR_19 = FUNC_3(VAR_1, &VAR_9[VAR_10], VAR_6);
  if (FUNC_1(VAR_9[VAR_10].crc) != VAR_19) {
   FUNC_9("bad CRC at record %u: %#08x, not %#08x",
     VAR_10, VAR_19, FUNC_1(VAR_9[VAR_10].crc));
   FUNC_8(&VAR_9[VAR_10], VAR_10);
   return 1;
  }

  if (VAR_12 == 0) {
   if (FUNC_5(&VAR_9[VAR_10], &VAR_7,
      VAR_5)) {
    VAR_18 = 2;
    goto bad;
   }
   continue;
  }

  if (VAR_12 < 0 || VAR_13 < 0 || VAR_14 < 0 ||
      VAR_16 < 0) {
   VAR_18 = 3;
   goto bad;
  }

  if (VAR_13 > VAR_8->leb_size || VAR_13 == 0) {
   VAR_18 = 4;
   goto bad;
  }

  VAR_11 = VAR_13 & (VAR_8->min_io_size - 1);
  if (VAR_13 != 1 && VAR_11) {
   VAR_18 = 5;
   goto bad;
  }

  VAR_11 = VAR_8->leb_size % VAR_13;
  if (VAR_14 != VAR_11) {
   FUNC_4("bad data_pad, has to be %d", VAR_11);
   VAR_18 = 6;
   goto bad;
  }

  if (VAR_15 != VAR_2 && VAR_15 != VAR_3) {
   VAR_18 = 7;
   goto bad;
  }

  if (VAR_17 != 0 && VAR_17 != 1) {
   VAR_18 = 8;
   goto bad;
  }

  if (VAR_12 > VAR_8->good_peb_count) {
   FUNC_4("too large reserved_pebs %d, good PEBs %d",
    VAR_12, VAR_8->good_peb_count);
   VAR_18 = 9;
   goto bad;
  }

  if (VAR_16 > VAR_4) {
   VAR_18 = 10;
   goto bad;
  }

  if (VAR_20[0] == '\0') {
   VAR_18 = 11;
   goto bad;
  }

  if (VAR_16 != FUNC_7(VAR_20, VAR_16 + 1)) {
   VAR_18 = 12;
   goto bad;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->vtbl_slots - 1; VAR_10++) {
  for (VAR_11 = VAR_10 + 1; VAR_11 < VAR_8->vtbl_slots; VAR_11++) {
   int VAR_21 = FUNC_0(VAR_9[VAR_10].name_len);
   int VAR_22 = FUNC_0(VAR_9[VAR_11].name_len);

   if (VAR_21 > 0 && VAR_21 == VAR_22 &&
       !FUNC_6(VAR_9[VAR_10].name, VAR_9[VAR_11].name, VAR_21)) {
    FUNC_9("volumes %d and %d have the same name"
     " \"%s\"", VAR_10, VAR_11, VAR_9[VAR_10].name);
    FUNC_8(&VAR_9[VAR_10], VAR_10);
    FUNC_8(&VAR_9[VAR_11], VAR_11);
    return -VAR_0;
   }
  }
 }

 return 0;

bad:
 FUNC_9("volume table check failed: record %d, error %d", VAR_10, VAR_18);
 FUNC_8(&VAR_9[VAR_10], VAR_10);
 return -VAR_0;
}
