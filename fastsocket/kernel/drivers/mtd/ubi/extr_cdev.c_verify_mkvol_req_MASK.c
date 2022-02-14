
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_mkvol_req {scalar_t__ bytes; int alignment; scalar_t__ vol_type; int name_len; scalar_t__ vol_id; int name; } ;
struct ubi_device {scalar_t__ vtbl_slots; int leb_size; int min_io_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ubi_mkvol_req const*) ;

__attribute__((used)) static int FUNC_3(const struct ubi_device *VAR_6,
       const struct ubi_mkvol_req *VAR_7)
{
 int VAR_8, VAR_9 = -VAR_0;

 if (VAR_7->bytes < 0 || VAR_7->alignment < 0 || VAR_7->vol_type < 0 ||
     VAR_7->name_len < 0)
  goto bad;

 if ((VAR_7->vol_id < 0 || VAR_7->vol_id >= VAR_6->vtbl_slots) &&
     VAR_7->vol_id != VAR_5)
  goto bad;

 if (VAR_7->alignment == 0)
  goto bad;

 if (VAR_7->bytes == 0)
  goto bad;

 if (VAR_7->vol_type != VAR_2 &&
     VAR_7->vol_type != VAR_3)
  goto bad;

 if (VAR_7->alignment > VAR_6->leb_size)
  goto bad;

 VAR_8 = VAR_7->alignment & (VAR_6->min_io_size - 1);
 if (VAR_7->alignment != 1 && VAR_8)
  goto bad;

 if (VAR_7->name_len > VAR_4) {
  VAR_9 = -VAR_1;
  goto bad;
 }

 VAR_8 = FUNC_1(VAR_7->name, VAR_7->name_len + 1);
 if (VAR_8 != VAR_7->name_len)
  goto bad;

 return 0;

bad:
 FUNC_0("bad volume creation request");
 FUNC_2(VAR_7);
 return VAR_9;
}
