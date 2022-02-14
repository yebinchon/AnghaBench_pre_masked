
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int fd; scalar_t__ ssl_ctx; scalar_t__ ssl; } ;
struct http_t {int error; scalar_t__ part; char* data; int pos; int buflen; int status; scalar_t__ bodytype; int len; TYPE_1__ sock_state; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int*,int *,int) ;
 int FUNC_5 (scalar_t__,int*,int *,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int *,int) ;
 size_t FUNC_9 (char*,int *,int) ;

bool FUNC_10(struct http_t *VAR_9, size_t* VAR_10, size_t* VAR_11)
{
   ssize_t VAR_12 = 0;

   if (!VAR_9 || VAR_9->error)
      goto fail;

   if (VAR_9->part < VAR_0)
   {
      if (VAR_9->error)
         VAR_12 = -1;
      else
      {







            VAR_12 = FUNC_4(VAR_9->sock_state.fd, &VAR_9->error,
               (uint8_t*)VAR_9->data + VAR_9->pos,
               VAR_9->buflen - VAR_9->pos);
      }

      if (VAR_12 < 0)
         goto fail;

      if (VAR_9->pos + VAR_12 >= VAR_9->buflen - 64)
      {
         VAR_9->buflen *= 2;
         VAR_9->data = (char*)FUNC_3(VAR_9->data, VAR_9->buflen);
      }
      VAR_9->pos += VAR_12;

      while (VAR_9->part < VAR_0)
      {
         char *VAR_13 = VAR_9->data + VAR_9->pos;
         char *VAR_14 = (char*)FUNC_1(VAR_9->data, '\n', VAR_9->pos);

         if (!VAR_14)
            break;

         *VAR_14='\0';

         if (VAR_14 != VAR_9->data && VAR_14[-1]=='\r')
            VAR_14[-1]='\0';

         if (VAR_9->part == VAR_5)
         {
            if (FUNC_7(VAR_9->data, "HTTP/1.", FUNC_0("HTTP/1."))!=0)
               goto fail;
            VAR_9->status = (int)FUNC_9(VAR_9->data
                  + FUNC_0("HTTP/1.1 "), ((void*)0), 10);
            VAR_9->part = VAR_4;
         }
         else
         {
            if (!FUNC_7(VAR_9->data, "Content-Length: ",
                     FUNC_0("Content-Length: ")))
            {
               VAR_9->bodytype = VAR_8;
               VAR_9->len = FUNC_8(VAR_9->data +
                     FUNC_0("Content-Length: "), ((void*)0), 10);
            }
            if (FUNC_6(VAR_9->data, "Transfer-Encoding: chunked"))
               VAR_9->bodytype = VAR_6;


            if (VAR_9->data[0]=='\0')
            {
               VAR_9->part = VAR_0;
               if (VAR_9->bodytype == VAR_6)
                  VAR_9->part = VAR_1;
            }
         }

         FUNC_2(VAR_9->data, VAR_14 + 1, VAR_13-(VAR_14+1));
         VAR_9->pos = (VAR_13-(VAR_14 + 1));
      }
      if (VAR_9->part >= VAR_0)
      {
         VAR_12 = VAR_9->pos;
         VAR_9->pos = 0;
      }
   }

   if (VAR_9->part >= VAR_0 && VAR_9->part < VAR_2)
   {
      if (!VAR_12)
      {
         if (VAR_9->error)
            VAR_12 = -1;
         else
         {
               VAR_12 = FUNC_4(
                  VAR_9->sock_state.fd,
                  &VAR_9->error,
                  (uint8_t*)VAR_9->data + VAR_9->pos,
                  VAR_9->buflen - VAR_9->pos);
         }

         if (VAR_12 < 0)
         {
            if (VAR_9->bodytype == VAR_7)
            {
               VAR_9->part = VAR_2;
               VAR_9->data = (char*)FUNC_3(VAR_9->data, VAR_9->len);
            }
            else
               goto fail;
            VAR_12=0;
         }

         if (VAR_9->pos + VAR_12 >= VAR_9->buflen - 64)
         {
            VAR_9->buflen *= 2;
            VAR_9->data = (char*)FUNC_3(VAR_9->data, VAR_9->buflen);
         }
      }

parse_again:
      if (VAR_9->bodytype == VAR_6)
      {
         if (VAR_9->part == VAR_1)
         {
            VAR_9->pos += VAR_12;
            if (VAR_9->pos - VAR_9->len >= 2)
            {





               char *VAR_15 = VAR_9->data + VAR_9->pos;
               char *VAR_16 = (char*)FUNC_1(VAR_9->data + VAR_9->len + 2, '\n',
                                             VAR_9->pos - VAR_9->len - 2);

               if (VAR_16)
               {
                  size_t VAR_17 = FUNC_9(VAR_9->data+VAR_9->len, ((void*)0), 16);
                  VAR_9->pos = VAR_9->len;
                  VAR_16++;

                  FUNC_2(VAR_9->data+VAR_9->len, VAR_16, VAR_15-VAR_16);

                  VAR_9->len = VAR_17;
                  VAR_12 = (VAR_15 - VAR_16);







                  VAR_9->part = VAR_0;
                  if (VAR_9->len == 0)
                  {
                     VAR_9->part = VAR_2;
                     VAR_9->len = VAR_9->pos;
                     VAR_9->data = (char*)FUNC_3(VAR_9->data, VAR_9->len);
                  }
                  goto parse_again;
               }
            }
         }
         else if (VAR_9->part == VAR_0)
         {
            if ((size_t)VAR_12 >= VAR_9->len)
            {
               VAR_9->pos += VAR_9->len;
               VAR_12 -= VAR_9->len;
               VAR_9->len = VAR_9->pos;
               VAR_9->part = VAR_1;
               goto parse_again;
            }
            else
            {
               VAR_9->pos += VAR_12;
               VAR_9->len -= VAR_12;
            }
         }
      }
      else
      {
         VAR_9->pos += VAR_12;

         if (VAR_9->pos == VAR_9->len)
         {
            VAR_9->part = VAR_2;
            VAR_9->data = (char*)FUNC_3(VAR_9->data, VAR_9->len);
         }
         if (VAR_9->pos > VAR_9->len)
            goto fail;
      }
   }

   if (VAR_10)
      *VAR_10 = VAR_9->pos;

   if (VAR_11)
   {
      if (VAR_9->bodytype == VAR_8)
         *VAR_11=VAR_9->len;
      else
         *VAR_11=0;
   }

   return (VAR_9->part == VAR_2);

fail:
   if (VAR_9)
   {
      VAR_9->error = 1;
      VAR_9->part = VAR_3;
      VAR_9->status = -1;
   }

   return 1;
}
