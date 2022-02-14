
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {uintptr_t content_icon; } ;
typedef TYPE_2__ stripes_node_t ;
struct TYPE_8__ {uintptr_t* list; } ;
struct TYPE_10__ {int depth; TYPE_1__ textures; int categories_selection_ptr; } ;
typedef TYPE_3__ stripes_handle_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 uintptr_t FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static uintptr_t FUNC_2(stripes_handle_t *VAR_35,
      stripes_node_t *VAR_36, stripes_node_t *VAR_37,
      enum msg_hash_enums VAR_38, unsigned VAR_39, bool VAR_40)
{
   switch (VAR_38)
   {
      case 173:
      case 166:
         return VAR_35->textures.list[VAR_8];
      case 177:
      case 176:
         return VAR_35->textures.list[VAR_3];
      case 162:
      case 164:
         return VAR_35->textures.list[VAR_21];
      case 174:
         return VAR_35->textures.list[VAR_15];
      case 175:
         return VAR_35->textures.list[VAR_4];
      case 171:
         return VAR_35->textures.list[VAR_10];
      case 155:
         return VAR_35->textures.list[VAR_30];
      case 179:
         return VAR_35->textures.list[VAR_2];
      case 178:
         return VAR_35->textures.list[VAR_2];
      case 157:
         return VAR_35->textures.list[VAR_27];
      case 167:
         return VAR_35->textures.list[VAR_16];
      case 165:
      case 153:
      case 152:
         return VAR_35->textures.list[VAR_32];
      case 154:
         return VAR_35->textures.list[VAR_28];
      case 172:
         return VAR_35->textures.list[VAR_5];
      case 161:
         return VAR_35->textures.list[VAR_20];
      case 163:
         return VAR_35->textures.list[VAR_21];
      case 160:
         return VAR_35->textures.list[VAR_22];
      case 159:
      case 158:
         return VAR_35->textures.list[VAR_27];
      case 169:
      case 170:
         return VAR_35->textures.list[VAR_13];
      case 168:
         return VAR_35->textures.list[VAR_19];
      default:
         break;
   }

   switch(VAR_39)
   {
      case 191:
         return VAR_35->textures.list[VAR_13];
      case 184:
      case 187:
         return VAR_35->textures.list[VAR_12];
      case 180:
         if (VAR_36)
            return VAR_36->content_icon;

         switch (FUNC_1(VAR_35,
                  (unsigned)VAR_35->categories_selection_ptr))
         {
            case 131:
               return VAR_35->textures.list[VAR_11];
            case 129:
               return VAR_35->textures.list[VAR_18];
            default:
               break;
         }
         return VAR_35->textures.list[VAR_12];
      case 194:
         return VAR_35->textures.list[VAR_34];
      case 185:
         return VAR_35->textures.list[VAR_18];
      case 189:
      case 188:
         return VAR_35->textures.list[VAR_14];
      case 186:
         return VAR_35->textures.list[VAR_17];
      case 193:
      case 190:
         return VAR_35->textures.list[VAR_6];
      case 182:
         return VAR_35->textures.list[VAR_19];
      case 192:
         return VAR_35->textures.list[VAR_9];
      case 183:
      case 136:
         return VAR_35->textures.list[VAR_26];
      case 146:
         return VAR_35->textures.list[VAR_5];
      case 135:
         return VAR_35->textures.list[VAR_27];
      case 138:
         return VAR_35->textures.list[VAR_16];
      case 181:
      case 143:
         return VAR_35->textures.list[VAR_7];
      case 141:
      case 156:
         return VAR_35->textures.list[VAR_8];
      case 142:
         return VAR_35->textures.list[VAR_15];
      case 145:
         return VAR_35->textures.list[VAR_4];
      case 144:
         return VAR_35->textures.list[VAR_10];
      case 140:
         return VAR_35->textures.list[VAR_30];
      case 134:
         return VAR_35->textures.list[VAR_28];
      case 139:
         return VAR_35->textures.list[VAR_5];
      case 137:
         return VAR_35->textures.list[VAR_20];
      case 147:
         if (VAR_35->depth == 3)
            return VAR_35->textures.list[VAR_31];
         return VAR_35->textures.list[VAR_29];
      case 133:
         return VAR_35->textures.list[VAR_29];
      case 151:
         return VAR_35->textures.list[VAR_7];
      case 132:
         return VAR_35->textures.list[VAR_33];
   }
   return VAR_35->textures.list[VAR_31];
}
