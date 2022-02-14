
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int tiling_flags; int gpu_offset; } ;
struct radeon_cs_reloc {TYPE_2__ lobj; int robj; } ;
struct TYPE_3__ {int* ptr; } ;
struct radeon_cs_parser {int cs_flags; int dev; TYPE_1__ ib; scalar_t__ track; } ;
struct r600_cs_track {int sq_config; int db_depth_control; int db_dirty; int db_depth_info; int db_depth_view; int db_depth_size; int db_depth_size_idx; int vgt_strmout_en; int streamout_dirty; int vgt_strmout_buffer_en; int* vgt_strmout_bo_offset; int* vgt_strmout_bo_mc; int* vgt_strmout_size; int cb_target_mask; int cb_dirty; int cb_shader_mask; int log_nsamples; int nsamples; int is_resolve; int* cb_color_info; int* cb_color_view; int* cb_color_size; int* cb_color_size_idx; int* cb_color_base_last; int* cb_color_frag_offset; int* cb_color_bo_offset; int* cb_color_tile_offset; int* cb_color_mask; int* cb_color_bo_mc; int db_offset; int db_bo_mc; int htile_offset; int htile_surface; int sx_misc_kill_all_prims; int htile_bo; int db_bo; int * cb_color_bo; int * cb_color_tile_bo; int * cb_color_frag_bo; int * vgt_strmout_bo; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int VAR_10 ;
 int* VAR_11 ;
 int FUNC_8 (struct radeon_cs_parser*) ;
 int FUNC_9 (struct radeon_cs_parser*,struct radeon_cs_reloc**,int ) ;
 int FUNC_10 (struct radeon_cs_parser*,int) ;

__attribute__((used)) static int FUNC_11(struct radeon_cs_parser *VAR_12, u32 VAR_13, u32 VAR_14)
{
 struct r600_cs_track *VAR_15 = (struct r600_cs_track *)VAR_12->track;
 struct radeon_cs_reloc *VAR_16;
 u32 VAR_17, VAR_18, VAR_19, *VAR_20;
 int VAR_21;

 VAR_18 = (VAR_13 >> 7);
 if (VAR_18 >= FUNC_0(VAR_11)) {
  FUNC_7(VAR_12->dev, "forbidden register 0x%08x at %d\n", VAR_13, VAR_14);
  return -VAR_1;
 }
 VAR_17 = 1 << ((VAR_13 >> 2) & 31);
 if (!(VAR_11[VAR_18] & VAR_17))
  return 0;
 VAR_20 = VAR_12->ib.ptr;
 switch (VAR_13) {




 case 203:
 case 266:
 case 201:
 case 264:
 case 197:
 case 260:
 case 200:
 case 263:
 case 202:
 case 265:
 case 198:
 case 261:
 case 196:
 case 259:
 case 199:
 case 262:
 case 195:

  VAR_19 =FUNC_10(VAR_12, VAR_14);
  VAR_20[VAR_14] = 0;
  break;
 case 143:
  VAR_15->sq_config = FUNC_10(VAR_12, VAR_14);
  break;
 case 205:
  VAR_15->db_depth_control = FUNC_10(VAR_12, VAR_14);
  VAR_15->db_dirty = 1;
  break;
 case 256:
  if (!(VAR_12->cs_flags & VAR_2) &&
      FUNC_8(VAR_12)) {
   VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
   if (VAR_21) {
    FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
      "0x%04X\n", VAR_13);
    return -VAR_1;
   }
   VAR_15->db_depth_info = FUNC_10(VAR_12, VAR_14);
   VAR_20[VAR_14] &= VAR_0;
   VAR_15->db_depth_info &= VAR_0;
   if (VAR_16->lobj.tiling_flags & VAR_3) {
    VAR_20[VAR_14] |= FUNC_4(VAR_6);
    VAR_15->db_depth_info |= FUNC_4(VAR_6);
   } else {
    VAR_20[VAR_14] |= FUNC_4(VAR_5);
    VAR_15->db_depth_info |= FUNC_4(VAR_5);
   }
  } else {
   VAR_15->db_depth_info = FUNC_10(VAR_12, VAR_14);
  }
  VAR_15->db_dirty = 1;
  break;
 case 257:
  VAR_15->db_depth_view = FUNC_10(VAR_12, VAR_14);
  VAR_15->db_dirty = 1;
  break;
 case 258:
  VAR_15->db_depth_size = FUNC_10(VAR_12, VAR_14);
  VAR_15->db_depth_size_idx = VAR_14;
  VAR_15->db_dirty = 1;
  break;
 case 194:
  VAR_15->vgt_strmout_en = FUNC_10(VAR_12, VAR_14);
  VAR_15->streamout_dirty = 1;
  break;
 case 193:
  VAR_15->vgt_strmout_buffer_en = FUNC_10(VAR_12, VAR_14);
  VAR_15->streamout_dirty = 1;
  break;
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_19 = (VAR_13 - 135) / 16;
  VAR_15->vgt_strmout_bo_offset[VAR_19] = FUNC_10(VAR_12, VAR_14) << 8;
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  VAR_15->vgt_strmout_bo[VAR_19] = VAR_16->robj;
  VAR_15->vgt_strmout_bo_mc[VAR_19] = VAR_16->lobj.gpu_offset;
  VAR_15->streamout_dirty = 1;
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_19 = (VAR_13 - 131) / 16;

  VAR_15->vgt_strmout_size[VAR_19] = FUNC_10(VAR_12, VAR_14) * 4;
  VAR_15->streamout_dirty = 1;
  break;
 case 270:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "missing reloc for CP_COHER_BASE "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  break;
 case 207:
  VAR_15->cb_target_mask = FUNC_10(VAR_12, VAR_14);
  VAR_15->cb_dirty = 1;
  break;
 case 206:
  VAR_15->cb_shader_mask = FUNC_10(VAR_12, VAR_14);
  break;
 case 192:
  VAR_19 = FUNC_3(FUNC_10(VAR_12, VAR_14));
  VAR_15->log_nsamples = VAR_19;
  VAR_15->nsamples = 1 << VAR_19;
  VAR_15->cb_dirty = 1;
  break;
 case 204:
  VAR_19 = FUNC_2(FUNC_10(VAR_12, VAR_14));
  VAR_15->is_resolve = VAR_19 == VAR_9;
  VAR_15->cb_dirty = 1;
  break;
 case 239:
 case 238:
 case 237:
 case 236:
 case 235:
 case 234:
 case 233:
 case 232:
  if (!(VAR_12->cs_flags & VAR_2) &&
       FUNC_8(VAR_12)) {
   VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
   if (VAR_21) {
    FUNC_6(VAR_12->dev, "bad SET_CONTEXT_REG 0x%04X\n", VAR_13);
    return -VAR_1;
   }
   VAR_19 = (VAR_13 - 239) / 4;
   VAR_15->cb_color_info[VAR_19] = FUNC_10(VAR_12, VAR_14);
   if (VAR_16->lobj.tiling_flags & VAR_3) {
    VAR_20[VAR_14] |= FUNC_5(VAR_8);
    VAR_15->cb_color_info[VAR_19] |= FUNC_5(VAR_8);
   } else if (VAR_16->lobj.tiling_flags & VAR_4) {
    VAR_20[VAR_14] |= FUNC_5(VAR_7);
    VAR_15->cb_color_info[VAR_19] |= FUNC_5(VAR_7);
   }
  } else {
   VAR_19 = (VAR_13 - 239) / 4;
   VAR_15->cb_color_info[VAR_19] = FUNC_10(VAR_12, VAR_14);
  }
  VAR_15->cb_dirty = 1;
  break;
 case 247:
 case 246:
 case 245:
 case 244:
 case 243:
 case 242:
 case 241:
 case 240:
  VAR_19 = (VAR_13 - 247) / 4;
  VAR_15->cb_color_view[VAR_19] = FUNC_10(VAR_12, VAR_14);
  VAR_15->cb_dirty = 1;
  break;
 case 255:
 case 254:
 case 253:
 case 252:
 case 251:
 case 250:
 case 249:
 case 248:
  VAR_19 = (VAR_13 - 255) / 4;
  VAR_15->cb_color_size[VAR_19] = FUNC_10(VAR_12, VAR_14);
  VAR_15->cb_color_size_idx[VAR_19] = VAR_14;
  VAR_15->cb_dirty = 1;
  break;
 case 223:
 case 222:
 case 221:
 case 220:
 case 219:
 case 218:
 case 217:
 case 216:
  VAR_19 = (VAR_13 - 223) / 4;
  if (!FUNC_8(VAR_12)) {
   if (!VAR_15->cb_color_base_last[VAR_19]) {
    FUNC_6(VAR_12->dev, "Broken old userspace ? no cb_color0_base supplied before trying to write 0x%08X\n", VAR_13);
    return -VAR_1;
   }
   VAR_15->cb_color_frag_bo[VAR_19] = VAR_15->cb_color_bo[VAR_19];
   VAR_15->cb_color_frag_offset[VAR_19] = VAR_15->cb_color_bo_offset[VAR_19];
   VAR_20[VAR_14] = VAR_15->cb_color_base_last[VAR_19];
  } else {
   VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
   if (VAR_21) {
    FUNC_6(VAR_12->dev, "bad SET_CONTEXT_REG 0x%04X\n", VAR_13);
    return -VAR_1;
   }
   VAR_15->cb_color_frag_bo[VAR_19] = VAR_16->robj;
   VAR_15->cb_color_frag_offset[VAR_19] = (u64)VAR_20[VAR_14] << 8;
   VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  }
  if (FUNC_1(VAR_15->cb_color_info[VAR_19])) {
   VAR_15->cb_dirty = 1;
  }
  break;
 case 231:
 case 230:
 case 229:
 case 228:
 case 227:
 case 226:
 case 225:
 case 224:
  VAR_19 = (VAR_13 - 231) / 4;
  if (!FUNC_8(VAR_12)) {
   if (!VAR_15->cb_color_base_last[VAR_19]) {
    FUNC_6(VAR_12->dev, "Broken old userspace ? no cb_color0_base supplied before trying to write 0x%08X\n", VAR_13);
    return -VAR_1;
   }
   VAR_15->cb_color_tile_bo[VAR_19] = VAR_15->cb_color_bo[VAR_19];
   VAR_15->cb_color_tile_offset[VAR_19] = VAR_15->cb_color_bo_offset[VAR_19];
   VAR_20[VAR_14] = VAR_15->cb_color_base_last[VAR_19];
  } else {
   VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
   if (VAR_21) {
    FUNC_6(VAR_12->dev, "bad SET_CONTEXT_REG 0x%04X\n", VAR_13);
    return -VAR_1;
   }
   VAR_15->cb_color_tile_bo[VAR_19] = VAR_16->robj;
   VAR_15->cb_color_tile_offset[VAR_19] = (u64)VAR_20[VAR_14] << 8;
   VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  }
  if (FUNC_1(VAR_15->cb_color_info[VAR_19])) {
   VAR_15->cb_dirty = 1;
  }
  break;
 case 215:
 case 214:
 case 213:
 case 212:
 case 211:
 case 210:
 case 209:
 case 208:
  VAR_19 = (VAR_13 - 215) / 4;
  VAR_15->cb_color_mask[VAR_19] = FUNC_10(VAR_12, VAR_14);
  if (FUNC_1(VAR_15->cb_color_info[VAR_19])) {
   VAR_15->cb_dirty = 1;
  }
  break;
 case 278:
 case 277:
 case 276:
 case 275:
 case 274:
 case 273:
 case 272:
 case 271:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_19 = (VAR_13 - 278) / 4;
  VAR_15->cb_color_bo_offset[VAR_19] = FUNC_10(VAR_12, VAR_14) << 8;
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  VAR_15->cb_color_base_last[VAR_19] = VAR_20[VAR_14];
  VAR_15->cb_color_bo[VAR_19] = VAR_16->robj;
  VAR_15->cb_color_bo_mc[VAR_19] = VAR_16->lobj.gpu_offset;
  VAR_15->cb_dirty = 1;
  break;
 case 269:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_15->db_offset = FUNC_10(VAR_12, VAR_14) << 8;
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  VAR_15->db_bo = VAR_16->robj;
  VAR_15->db_bo_mc = VAR_16->lobj.gpu_offset;
  VAR_15->db_dirty = 1;
  break;
 case 268:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_15->htile_offset = FUNC_10(VAR_12, VAR_14) << 8;
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  VAR_15->htile_bo = VAR_16->robj;
  VAR_15->db_dirty = 1;
  break;
 case 267:
  VAR_15->htile_surface = FUNC_10(VAR_12, VAR_14);

  VAR_20[VAR_14] |= 3;
  VAR_15->db_dirty = 1;
  break;
 case 141:
 case 142:
 case 138:
 case 140:
 case 139:
 case 191:
 case 190:
 case 183:
 case 182:
 case 181:
 case 180:
 case 179:
 case 178:
 case 177:
 case 176:
 case 189:
 case 188:
 case 187:
 case 186:
 case 185:
 case 184:
 case 175:
 case 174:
 case 167:
 case 166:
 case 165:
 case 164:
 case 163:
 case 162:
 case 161:
 case 160:
 case 173:
 case 172:
 case 171:
 case 170:
 case 169:
 case 168:
 case 159:
 case 158:
 case 151:
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 case 152:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONTEXT_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  break;
 case 137:
  VAR_21 = FUNC_9(VAR_12, &VAR_16, VAR_10);
  if (VAR_21) {
   FUNC_7(VAR_12->dev, "bad SET_CONFIG_REG "
     "0x%04X\n", VAR_13);
   return -VAR_1;
  }
  VAR_20[VAR_14] += (u32)((VAR_16->lobj.gpu_offset >> 8) & 0xffffffff);
  break;
 case 136:
  VAR_15->sx_misc_kill_all_prims = (FUNC_10(VAR_12, VAR_14) & 0x1) != 0;
  break;
 default:
  FUNC_7(VAR_12->dev, "forbidden register 0x%08x at %d\n", VAR_13, VAR_14);
  return -VAR_1;
 }
 return 0;
}
