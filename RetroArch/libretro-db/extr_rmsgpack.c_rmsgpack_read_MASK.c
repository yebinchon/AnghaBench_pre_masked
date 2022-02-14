
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct rmsgpack_read_callbacks {int (* read_int ) (int,void*) ;int (* read_string ) (char*,int ,void*) ;int (* read_nil ) (void*) ;int (* read_bool ) (int,void*) ;int (* read_bin ) (char*,int ,void*) ;int (* read_uint ) (int,void*) ;} ;
typedef int ssize_t ;
typedef int int64_t ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int *,int ,struct rmsgpack_read_callbacks*,void*) ;
 int FUNC_5 (int *,size_t,char**,int*) ;
 int FUNC_6 (int *,int*,size_t) ;
 int FUNC_7 (int *,int ,struct rmsgpack_read_callbacks*,void*) ;
 int FUNC_8 (int *,int*,int) ;
 int FUNC_9 (int,void*) ;
 int FUNC_10 (char*,int ,void*) ;
 int FUNC_11 (char*,int ,void*) ;
 int FUNC_12 (int,void*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int,void*) ;
 int FUNC_15 (int,void*) ;
 int FUNC_16 (char*,int ,void*) ;
 int FUNC_17 (int,void*) ;
 int FUNC_18 (int,void*) ;

int FUNC_19(RFILE *VAR_7,
      struct rmsgpack_read_callbacks *VAR_8, void *VAR_9)
{
   int VAR_10;
   uint64_t VAR_11 = 0;
   uint64_t VAR_12 = 0;
   int64_t VAR_13 = 0;
   uint8_t VAR_14 = 0;
   char *VAR_15 = ((void*)0);

   if (FUNC_1(VAR_7, &VAR_14, sizeof(uint8_t)) == -1)
      goto error;

   if (VAR_14 < VAR_2)
   {
      if (!VAR_8->read_int)
         return 0;
      return VAR_8->read_int(VAR_14, VAR_9);
   }
   else if (VAR_14 < VAR_1)
   {
      VAR_11 = VAR_14 - VAR_2;
      return FUNC_7(VAR_7, (uint32_t)VAR_11, VAR_8, VAR_9);
   }
   else if (VAR_14 < VAR_3)
   {
      VAR_11 = VAR_14 - VAR_1;
      return FUNC_4(VAR_7, (uint32_t)VAR_11, VAR_8, VAR_9);
   }
   else if (VAR_14 < VAR_5)
   {
      ssize_t VAR_16 = 0;
      VAR_11 = VAR_14 - VAR_3;
      VAR_15 = (char *)FUNC_3((size_t)(VAR_11 + 1) * sizeof(char));
      if (!VAR_15)
         return -VAR_0;
      if ((VAR_16 = FUNC_1(VAR_7, VAR_15, (ssize_t)VAR_11)) == -1)
      {
         FUNC_2(VAR_15);
         goto error;
      }
      VAR_15[VAR_16] = '\0';
      if (!VAR_8->read_string)
      {
         FUNC_2(VAR_15);
         return 0;
      }
      return VAR_8->read_string(VAR_15, (uint32_t)VAR_16, VAR_9);
   }
   else if (VAR_14 > VAR_4)
   {
      if (!VAR_8->read_int)
         return 0;
      return VAR_8->read_int(VAR_14 - 0xff - 1, VAR_9);
   }

   switch (VAR_14)
   {
      case 136:
         if (VAR_8->read_nil)
            return VAR_8->read_nil(VAR_9);
         break;
      case 143:
         if (VAR_8->read_bool)
            return VAR_8->read_bool(0, VAR_9);
         break;
      case 132:
         if (VAR_8->read_bool)
            return VAR_8->read_bool(1, VAR_9);
         break;
      case 144:
      case 146:
      case 145:
         if ((VAR_10 = FUNC_5(VAR_7, (size_t)(1 << (VAR_14 - 144)),
                     &VAR_15, &VAR_11)) < 0)
            return VAR_10;

         if (VAR_8->read_bin)
            return VAR_8->read_bin(VAR_15, (uint32_t)VAR_11, VAR_9);
         break;
      case 128:
      case 131:
      case 130:
      case 129:
         VAR_11 = FUNC_0(1) << (VAR_14 - 128);
         VAR_12 = 0;
         if (FUNC_8(VAR_7, &VAR_12, (size_t)VAR_11) == -1)
            goto error;

         if (VAR_8->read_uint)
            return VAR_8->read_uint(VAR_12, VAR_9);
         break;
      case 139:
      case 142:
      case 141:
      case 140:
         VAR_11 = FUNC_0(1) << (VAR_14 - 139);
         VAR_13 = 0;
         if (FUNC_6(VAR_7, &VAR_13, (size_t)VAR_11) == -1)
            goto error;

         if (VAR_8->read_int)
            return VAR_8->read_int(VAR_13, VAR_9);
         break;
      case 133:
      case 135:
      case 134:
         if ((VAR_10 = FUNC_5(VAR_7, (size_t)(1 << (VAR_14 - 133)), &VAR_15, &VAR_11)) < 0)
            return VAR_10;

         if (VAR_8->read_string)
            return VAR_8->read_string(VAR_15, (uint32_t)VAR_11, VAR_9);
         break;
      case 148:
      case 147:
         if (FUNC_8(VAR_7, &VAR_11, 2<<(VAR_14 - 148)) == -1)
            goto error;
         return FUNC_4(VAR_7, (uint32_t)VAR_11, VAR_8, VAR_9);
      case 138:
      case 137:
         if (FUNC_8(VAR_7, &VAR_11, 2<<(VAR_14 - 138)) == -1)
            goto error;
         return FUNC_7(VAR_7, (uint32_t)VAR_11, VAR_8, VAR_9);
   }

   if (VAR_15)
      FUNC_2(VAR_15);
   return 0;

error:
   return -VAR_6;
}
